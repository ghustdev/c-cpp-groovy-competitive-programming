#include <stdio.h>

// --- Protótipos ---
int isQuadradoPerfeito(int N);


// --- Main ---
int main()
{
    int N;
    printf(""); scanf("%d", &N);

    isQuadradoPerfeito(N) == 0 ? printf("QUADRADO PERFEITO") : printf("NAO EH QUADRADO PERFEITO");

    return 0;
}

// --- Funções ---
int isQuadradoPerfeito(int N)
{
    double squarePerfect = 1;
    for (int i = 1; i <= N; i++)
    {
        i*i == N ? squarePerfect = 0 : squarePerfect;
    }
    return squarePerfect;
}