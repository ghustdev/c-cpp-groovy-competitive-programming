#include <stdio.h>
#include <math.h>

int main() 
{
    float h, a, ca, co;    

    scanf("%f %f", &h, &a);

    ca = cos(a) * h;
    co = sin(a) * h;

    printf("%.6f %.6f", co, ca);
    return 0;
}