#include <stdio.h>
#include<stdbool.h>
int main()
{
    int a[5];
    int n = 5;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        bool flag=true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                 flag = false;
            }
        }
        if(flag == true) break;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}