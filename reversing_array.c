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
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    reverse(arr, a, b);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
} 