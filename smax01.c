#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {5, 9, 7, 6, 1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d\n", max);
    printf("%d\n", smax);
    return 0;
}
