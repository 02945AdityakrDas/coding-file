#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello World";
    char str2[] = "hello world";

    int result1 = strcmp(str1, str2);
    int result2 = strcmpi(str1, str2);

    printf("Result of strcmp: %d\n", result1);  // Returns non-zero value indicating inequality due to case sensitivity
    printf("Result of strcmpi: %d\n", result2); // Returns zero indicating equality due to case insensitivity

    return 0;
}
