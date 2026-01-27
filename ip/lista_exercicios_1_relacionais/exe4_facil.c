#include <stdio.h>
#include <math.h>

int main() {

    float x1, x2, x3;

    printf("Number x1: "); scanf("%f", &x1);
    printf("Number x2: "); scanf("%f", &x2);
    printf("Number x3: "); scanf("%f", &x3);

    float y = pow((x1 + 3), 4) + pow((x2 * x3), 3);

    printf("y = %.2f", y);
    return 0;
}