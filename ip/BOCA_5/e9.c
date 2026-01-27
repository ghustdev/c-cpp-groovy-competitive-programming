#include <stdio.h>

int main()
{
    int N, i, j, soma = 0;
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (j = 0; j < N; j++){
        soma += vet[j];
        printf("%d ", soma);
    }

    
    return 0;
}