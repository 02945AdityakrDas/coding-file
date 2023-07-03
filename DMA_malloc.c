#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create:\n ");
    scanf("%d", &n);
    if(ptr == NULL){
        printf("Memory not allocated.\n");
    }
    else{
        printf("Memory successfully allocated.\n");
    }
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %d element of this array is %d\n", i, ptr[i]);
    }

    return 0;
}