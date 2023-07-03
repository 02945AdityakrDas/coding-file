#include <stdio.h>
int main()
{
    int n;
    int product = 1;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);
    return 0;
}