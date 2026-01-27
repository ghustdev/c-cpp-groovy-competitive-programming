#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float h, a, c1, c2;
    // const float PI = 3.14159265359;

    printf("Hipotenusa h: "); scanf("%f", &h);
    printf("Angulo a: "); scanf("%f", &a);

    c1 = cos(a) * h;
    c2 = sin(a) * h;

    printf("h = %.2f, c1 = %.2f, c2 = %.2f", h, c1, c2);
    return 0;
}