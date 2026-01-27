#include <stdio.h>

int main() {
    int dias_faltados, carga_horaria = 128;
    float percentual_minimo = 0.75;
    int horas_por_dia = 2;
    
    int limite_faltas_horas = (1 - percentual_minimo) * carga_horaria;
    int limite_faltas_dias = limite_faltas_horas / horas_por_dia;

    printf("Digite o número de dias que o estudante já faltou: ");
    scanf("%d", &dias_faltados);

    int dias_restantes = limite_faltas_dias - dias_faltados;

    if (dias_restantes >= 0) {
        printf("O estudante ainda pode faltar %d dias sem ser reprovado por faltas.\n", dias_restantes);
    } else {
        printf("O estudante já ultrapassou o limite de faltas e está reprovado por frequência.\n");
    }

    return 0;
}
