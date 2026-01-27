#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    double r;

    printf("Number x: ");
    scanf("%d", &x);
    printf("Number y: ");
    scanf("%d", &y);
    printf("Number z: ");
    scanf("%d", &z);

    r = (pow(x, 3)) + (pow(y, 2)) + (x*y*z);

    printf("r = %.2f", r);
    return 0;
}