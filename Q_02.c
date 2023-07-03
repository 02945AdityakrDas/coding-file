#include <stdio.h>
#include <math.h>

void quadratic_root(double a, double b, double c)
{
    double discriminant, root1, root2;

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("The equation has no real roots\n");
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("The equation has one real root: %lf\n", root1);
    }
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two real roots: %lf and %lf\n", root1, root2);
    }
}

void main()
{
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    quadratic_root(a, b, c);

}


