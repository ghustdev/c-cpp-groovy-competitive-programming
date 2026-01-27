#include <stdio.h>
#include <math.h>

int main() {

    float c1, c2;

    printf("Cateto c1: "); scanf("%f", &c1);
    printf("Cateto c2: "); scanf("%f", &c2);

    float h = sqrt(pow(c1, 2) + pow(c2, 2));

    printf("h = %.2f", h);
    return 0;
}