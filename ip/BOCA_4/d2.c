#include <stdio.h>

// --- Protótipos ---
int verificaParidade(int number);


// --- Main ---
int main()
{
    int number;
    printf(""); scanf("%d", &number);

    printf("%d", verificaParidade(number));

    return 0;
}

// --- Funções ---
int verificaParidade(int number)
{
    return number % 2 == 0 ? 0 : 1;
}