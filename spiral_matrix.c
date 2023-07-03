#include <stdio.h>
int main()
{
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
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;
    int tne = n * m;
    int count = 0;
    while (count < tne)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}