#include <stdio.h>
int main()
{
    int marks[10] = {55, 44, 99, 100, 23, 36, 34, 85, 12, 30};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
            printf("%d ", i);
    }
    return 0;
}