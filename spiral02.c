// WAP to print matrix in spiral way and also take input from user .

#include <stdio.h>
int main()
{
    int rows, columns, i, j;
    int matrix[rows][columns];
    // Get input from user for the matrix size
    printf("Enter the number of rows and columns of the matrix : ");
    scanf("%d %d", &rows, &columns);
    // Get input from user for matrix elements
    printf("Enter the elements of the matrix :\n");
    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j < columns; j = j + 1)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Print the matrix in spiral way
    int row_start = 0, row_end = rows - 1, column_start = 0, column_end = columns - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        // Print the first row from the remaining rows
        for (j = column_start; j <= column_end; j = j + 1)
        {
            printf("%d\t", matrix[row_start][j]);
        }
        row_start = row_start + 1;
        // Print the last column from the remaining columns
        for (i = row_start; i <= row_end; i = i + 1)
        {
            printf("%d\t", matrix[i][column_end]);
        }
        column_end = column_end - 1;
        // Print the last row from the remaining rows
        if (row_start <= row_end)
        {
            for (j = column_end; j >= column_start; j = j - 1)
            {
                printf("%d\t", matrix[row_end][j]);
            }
            row_end = row_end - 1;
        }
        // Print the first column from the remaining columns
        if (column_start <= column_end)
        {
            for (i = row_end; i >= row_start; i = i - 1)
            {
                printf("%d\t", matrix[i][column_start]);
            }
            column_start = column_start + 1;
        }
    }
    return 0;
}

