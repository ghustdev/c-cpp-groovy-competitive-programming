#include <stdio.h>

int main() {
    float comprimento, largura, altura;

    printf("comprimento:"); scanf("%f", &comprimento);
    printf("largura:"); scanf("%f", &largura);
    printf("altura:"); scanf("%f", &altura);

    float volume = 0.9*(comprimento * largura * altura);

    printf("%.2f", volume);

    return 0;
}