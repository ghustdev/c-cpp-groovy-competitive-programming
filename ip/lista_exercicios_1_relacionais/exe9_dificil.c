#include <stdio.h>

int main() {
    float prova1, prova2, prova3, trabalho1, trabalho2;
    float media_provas, media_trabalhos;

    printf("Digite a nota da Prova 1: ");
    scanf("%f", &prova1);
    
    printf("Digite a nota da Prova 2: ");
    scanf("%f", &prova2);
    
    printf("Digite a nota da Prova 3: ");
    scanf("%f", &prova3);

    printf("Digite a nota do Trabalho 1: ");
    scanf("%f", &trabalho1);
    
    printf("Digite a nota do Trabalho 2: ");
    scanf("%f", &trabalho2);

    media_provas = (prova1 + prova2 + prova3) / 3.0;

    media_trabalhos = (trabalho1 + trabalho2) / 2.0;

    printf("\nMedia Final da disciplina: %.2f\n", media_provas*0.6 + media_trabalhos*0.4);

    return 0;
}
