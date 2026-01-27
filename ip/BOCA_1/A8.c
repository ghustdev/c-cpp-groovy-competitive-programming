#include <stdio.h>

int main() 
{
    float salario; 
    float reajuste_abril = 1.05;
    float reajuste_setembro = 1.039;

    scanf("%f", &salario);

    for (int i = 1; i <= 12; i++) {
        if (i <= 3) {
            printf("\n%.4f", salario);
        }
        else if (4 <= i && i <= 8) {
            printf("\n%.4f", (salario*reajuste_abril));
        } else if (i >= 8) {
            printf("\n%.4f", (salario*reajuste_abril*reajuste_setembro));
        }
    }
    return 0;
}