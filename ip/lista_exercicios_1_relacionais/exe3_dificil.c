#include <stdio.h>

int main() {
    float minimo, jose;

    minimo = 1412.00;
    jose = 4500.00;

    printf("Salario minimo: %.2f\nSalario de Jose: %.2f\nJose recebe %.2f salarios minimos.", minimo, jose, jose/minimo);

    return 0;
}