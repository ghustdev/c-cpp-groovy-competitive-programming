#include <stdio.h>

int main() 
{
    int fouls; 
    float n1, n2, n3;

    scanf("%f %f %f %d", &n1, &n2, &n3, &fouls);

    float media = (n1 + n2 + n3) / 3.0;

    if (fouls > 65*0.25)
    {
        printf("Reprovado por falta\n");
    } else {
        if (media < 5.0) {
            printf("Reprovado\n");
        } else if (media >= 5.0 && media < 7.0) {
            printf("Prova final\n");
        } else if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Nota invalida\n");
        }
    }
    
    return 0;
}