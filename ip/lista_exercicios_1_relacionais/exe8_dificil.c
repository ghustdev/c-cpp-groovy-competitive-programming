#include <stdio.h>

int main() {
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1cent;
    float total;

    printf("Quantidade de moedas de R$1,00: "); scanf("%d", &moedas1);
    
    printf("Quantidade de moedas de R$0,50: "); scanf("%d", &moedas50);
    
    printf("Quantidade de moedas de R$0,25: "); scanf("%d", &moedas25);
    
    printf("Quantidade de moedas de R$0,10: "); scanf("%d", &moedas10);
    
    printf("Quantidade de moedas de R$0,05: "); scanf("%d", &moedas5);
    
    printf("Quantidade de moedas de R$0,01: "); scanf("%d", &moedas1cent);

    total = (moedas1 * 1.00) + (moedas50 * 0.50) + (moedas25 * 0.25) +
            (moedas10 * 0.10) + (moedas5 * 0.05) + (moedas1cent * 0.01);

    printf("\nTotal economizado: R$%.2f\n", total);

    return 0;
}
