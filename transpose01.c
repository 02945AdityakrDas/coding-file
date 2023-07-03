#include <stdio.h>
int main()
{
    int r;
    printf("Enter numbers of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter numbers of coloumns: ");
    scanf("%d", &c);
    int arr[r][c];
    int brr[c][r];
    printf("Enter the elements: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}