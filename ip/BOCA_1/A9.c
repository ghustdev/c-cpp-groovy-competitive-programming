#include <stdio.h>

int main() 
{
    int faltas_dias;
    int faltas_dias_possiveis = 128 / 2 * 0.25; // 35% de 128 horas em dias, apenas parte inteira

    scanf("%i", &faltas_dias);

    if (faltas_dias <= faltas_dias_possiveis) {
        printf("%i", (faltas_dias_possiveis - faltas_dias));
    }
    else {
        printf("Aluno reprovado!");
    }
    return 0;
}