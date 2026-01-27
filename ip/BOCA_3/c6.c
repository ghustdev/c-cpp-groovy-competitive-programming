#include <stdio.h>

int main()
{
    int n_alunos;
    int aprovados = 0, reprovados = 0, exame = 0;
    float n1, n2;

    scanf("%d", &n_alunos);

    for (int i = 1; i <= n_alunos; i++)
    {
        scanf("%f %f", &n1, &n2);

        float media = (n1 + n2) / 2.0;

        if (media >= 7.0)
        {
            printf("Aluno %d: Aprovado\n", i);
            aprovados++;
        }
        else if (media > 3.0 && media < 7.0)
        {
            printf("Aluno %d: Exame\n", i);
            exame++;
        }
        else
        {
            printf("Aluno %d: Reprovado\n", i);
            reprovados++;
        }
    }

    printf("Total Aprovados: %d\n", aprovados);
    printf("Total Exame: %d\n", exame);
    printf("Total Reprovados: %d\n", reprovados);

    return 0;
}