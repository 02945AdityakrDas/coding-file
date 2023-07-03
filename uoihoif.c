#include<stdio.h>
int main(){
    int n, m, i, j;
    int matrix[n][m];
    // Get input from user for the matrix size
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of coloumns: ");
    scanf("%d", &m);
    printf("Enter the elements of the matrix :\n");
    for (i = 0; i < n; i = i + 1)
    {
        for (j = 0; j < m; j = j + 1)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
return 0;
}