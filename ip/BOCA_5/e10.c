#include <stdio.h>

int main()
{
    int N, i, j, soma = 0;
    scanf("%d", &N);

    int vet[N];
    int vet_inverso[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }

    for (j = 0; j < N; j++) {
        vet_inverso[j] = vet[N - j - 1];
        if (vet[j] == vet_inverso[j]) {
            soma++;
        }
    }

    if (soma == N)
        printf("SIM\n");
    else 
        printf("NAO\n");

    return 0;
}