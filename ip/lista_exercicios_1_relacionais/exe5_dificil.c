#include <stdio.h>

int main() {
    float x;

    printf("x: "); scanf("%f", &x);

    printf("x = %.2f\nf(x) = %.2f\n", x, (3*x*x + 5*x - 9));
    
    return 0;
}