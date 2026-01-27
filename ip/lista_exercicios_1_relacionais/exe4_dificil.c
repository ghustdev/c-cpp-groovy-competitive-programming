#include <stdio.h>

int main() {
    float salario;

    printf("Qual seu salario de janeiro de 2024? "); scanf("%f", &salario);
    
    printf("Janeiro: %.2f\n", salario);
    printf("Fevereiro: %.2f\n", salario);
    printf("Março: %.2f\n", salario);
    float salario_ajustado_abril = salario * 1.05;
    printf("Abril: %.2f\n", salario_ajustado_abril);
    printf("Maio: %.2f\n", salario_ajustado_abril);
    printf("Junho: %.2f\n", salario_ajustado_abril);
    printf("Julho: %.2f\n", salario_ajustado_abril);
    printf("Agosto: %.2f\n", salario_ajustado_abril);
    float salario_ajustado_setembro = salario_ajustado_abril * 1.039;
    printf("Setembro: %.2f\n", salario_ajustado_setembro);
    printf("Outubro: %.2f\n", salario_ajustado_setembro);
    printf("Novembro: %.2f\n", salario_ajustado_setembro);
    printf("Dezembro: %.2f\n", salario_ajustado_setembro);

    //-----------------------------------------------------

    // char *meses[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    // for (int i = 0; i < 12; i++) {
    //     printf("%i -> ", i+1);
    //     if (i < 3) {
    //         printf("%s: %.2f\n", meses[i], salario);
    //     } 
    //     else if (3 <= i && i < 8) {
    //         printf("%s: %.2f\n", meses[i], salario*1.05);
    //     } 
    //     else {
    //         printf("%s: %.2f\n", meses[i], salario*1.05*1.039);
    //     }
    // }

    return 0;
}