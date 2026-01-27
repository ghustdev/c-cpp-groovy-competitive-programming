#include <stdio.h>

int main() {
    float salario_maria, salario_jose;
    float economia_mensal, total_com_rendimento;

    printf("Digite o salário de Maria: R$");
    scanf("%f", &salario_maria);
    
    printf("Digite o salário de José: R$");
    scanf("%f", &salario_jose);

    economia_mensal = (salario_maria * 0.08) + (salario_jose * 0.08);

    float mes1 = economia_mensal;        
    float mes2 = mes1 + economia_mensal;   
    float mes3 = mes2 * (1.005) + economia_mensal; 
    float mes4 = mes3 * (1.005) + economia_mensal;
    float mes5 = mes4 * (1.005) + economia_mensal;
    float mes6 = mes5 * (1.005) + economia_mensal;
    float mes7 = mes6 * (1.005) + economia_mensal;
    float mes8 = mes7 * (1.005) + economia_mensal;
    float mes9 = mes8 * (1.005) + economia_mensal;
    total_com_rendimento = mes9 * (1.005);

    printf("\nTotal economizado até abril de 2024: R$%.2f\n", total_com_rendimento);

    return 0;
}
