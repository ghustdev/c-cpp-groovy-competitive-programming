#include <stdio.h>

// --- Protótipos ---
int isPrimo(int number);


// --- Main ---
int main()
{
    int N;
    printf(""); scanf("%d", &N);

    isPrimo(N) == 0 ? printf("PRIMO") : printf("NAO PRIMO");

    return 0;
}

// --- Funções ---
int isPrimo(int number)
{
    int primo = 0;

    for (int i = 2; i < number; i++)
    {
        number % i == 0 ? primo = 1 : primo;   
    }
    if (number <= 1)
        primo = 1;
    return primo;
}