#include <stdio.h>

// --- Protótipos ---
int contaDivisores(int number);


// --- Main ---
int main()
{
    int N;
    printf(""); scanf("%d", &N);

    printf("%d", contaDivisores(N));

    return 0;
}

// --- Funções ---
int contaDivisores(int number)
{
    int n_divisores = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            n_divisores++;
        }
    }
    return n_divisores;
}