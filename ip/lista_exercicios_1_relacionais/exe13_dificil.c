#include <stdio.h>

int main() {
    float renda, saude, educacao, alimentacao, vestuario, lazer, moradia, outros;

    printf("Digite a renda mensal líquida de Luciana (R$): ");
    scanf("%f", &renda);

    saude = renda * 0.05;
    educacao = renda * 0.12;
    alimentacao = renda * 0.30;
    vestuario = renda * 0.10;
    lazer = renda * 0.05;
    moradia = renda * 0.25;
    outros = renda - (saude + educacao + alimentacao + vestuario + lazer + moradia); 

    printf("\nDistribuição da renda mensal:\n");
    printf("Saúde: R$%.2f\n", saude);
    printf("Educação: R$%.2f\n", educacao);
    printf("Alimentação: R$%.2f\n", alimentacao);
    printf("Vestuário: R$%.2f\n", vestuario);
    printf("Lazer: R$%.2f\n", lazer);
    printf("Moradia: R$%.2f\n", moradia);
    printf("Outros gastos: R$%.2f\n", outros);

    return 0;
}
