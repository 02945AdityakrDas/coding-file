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
    // 2nd matrix
    int p;
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d", &p);
    int q;
    printf("Enter no of coloumns of 2nd matrix: ");
    scanf("%d", &q);
    int b[p][q];
    printf("\n Enter elements of 2nd matrix: ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (m != p)
    {
        printf("Error!! ");
    }
    else
    {
        int res[n][q];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Answer:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}