#include <stdio.h>

int main()
{
    float a,b,c,d,e;

    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    float x = (a*a*a) * ((b+c)/d + e);

    printf("%.2f", x);
    return 0;
}