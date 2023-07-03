#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[5] = {2, 5, 3, 43, 66};
    int n = 5;
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    a = a % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, a - 1);
    reverse(arr, a, n - 1);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}