#include <stdio.h>
#include <math.h>

int main() 
{
    float c1, c2;    

    scanf("%f %f", &c1, &c2);

    float h = sqrt(c1*c1 + c2*c2);

    printf("%.6f", h);
    return 0;
}