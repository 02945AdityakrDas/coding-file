#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[5] = {5, 9, 7, 6, 1};
    int max = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);
    return 0;
}