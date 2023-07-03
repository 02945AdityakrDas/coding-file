#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 5, 7, 8, 9};
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
        else
            arr[i] += 10;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}