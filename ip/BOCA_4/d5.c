#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// --- Protótipos ---
const char* situacao(double n1, double n2, int *situacao_aluno);

// --- Main ---
int main()
{
    int N; 
    double nota1, nota2;
    int situacao_aluno[3] = {0, 0, 0};

    printf(""); scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%lf %lf", &nota1, &nota2);

        printf("Aluno %d: %s\n", i, situacao(nota1, nota2, situacao_aluno));
    }
    printf("Total Aprovados: %d\n", situacao_aluno[0]);
    printf("Total Exame: %d\n", situacao_aluno[1]);
    printf("Total Reprovados: %d\n", situacao_aluno[2]);

    return 0;
}

// --- Funções ---
const char* situacao(double n1, double n2, int *situacao_aluno)
{
    if ((n1 + n2)/2 >= 7) {
        situacao_aluno[0] += 1;
        return "Aprovado";
    }
    else if ((n1 + n2)/2 <= 3) {
        situacao_aluno[2] += 1;
        return "Reprovado";
    }
    else {
        situacao_aluno[1] += 1;
        return "Exame";
    }
}