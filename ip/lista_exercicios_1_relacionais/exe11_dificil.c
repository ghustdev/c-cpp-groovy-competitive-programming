#include <stdio.h>

int main() {
    float tarifa_agua, tarifa_esgoto, total_sem_imposto, icms, total_com_imposto;
    const float ICMS_PERCENTUAL = 17.5 / 100;  
    
    printf("Digite o valor da tarifa de água (R$): ");
    scanf("%f", &tarifa_agua);

    printf("Digite o valor da tarifa de esgoto (R$): ");
    scanf("%f", &tarifa_esgoto);

    total_sem_imposto = tarifa_agua + tarifa_esgoto;

    icms = total_sem_imposto * ICMS_PERCENTUAL;

    total_com_imposto = total_sem_imposto + icms;

    printf("\nValor do ICMS: R$%.2f\n", icms);
    printf("Valor total da conta de água: R$%.2f\n", total_com_imposto);

    return 0;
}
