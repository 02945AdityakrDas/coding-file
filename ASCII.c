#include <stdio.h>

int main()
{
    int num;
    printf("Enter an ASCII value between 0 and 127: ");
    scanf("%d", &num);

    if (num < 0 || num > 127)
    {
        printf("Error: ASCII value out of range.\n");
        return 0;
    }

    printf("The corresponding character is: %c\n", num);

    return 0;
}
