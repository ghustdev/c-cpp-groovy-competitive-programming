#include <stdio.h>

int main()
{
    int N;
    float soma = 0.0;
    scanf("%d", &N);

    float vet[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i <= N/2; i++)
    {
        if (N % 2 == 0 && i == N/2) {
            break;
        }
        soma += (vet[i] - vet[N - i - 1]) * (vet[i] - vet[N - i - 1]) * (vet[i] - vet[N - i - 1]);
    }

    printf("%.2f ", soma);

    return 0;
}