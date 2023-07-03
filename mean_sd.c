#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    float sum = 0.0, mean, std_deviation = 0.0;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &num);
    float set[num];

    printf("Enter the elements of the set: ");
    for (i = 0; i < num; i++)
    {
        scanf("%f", &set[i]);
        sum += set[i];
    }

    mean = sum / num;

    for (i = 0; i < num; i++){
        std_deviation += pow(set[i] - mean, 2);
    }

    std_deviation = sqrt(std_deviation / num);

    printf("Mean = %f\n", mean);
    printf("Standard deviation = %f\n", std_deviation);

    return 0;
}
