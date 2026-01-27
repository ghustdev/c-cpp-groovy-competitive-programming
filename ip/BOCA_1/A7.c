#include <stdio.h>

int main() 
{
    float c, l, h;

    scanf("%f %f %f", &c,&l,&h);

    float v = 0.9 * c * l * h;

    printf("%.6f", v);
    return 0;
}