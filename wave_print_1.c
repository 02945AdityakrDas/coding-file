#include <stdio.h>
int main()
{
    // 1st matrix
    int n;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d", &n);
    int m;
    printf("Enter no of coloumns of 1st matrix: ");
    scanf("%d", &m);
    int a[n][m];
    printf("\n Enter elements of 1st matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}