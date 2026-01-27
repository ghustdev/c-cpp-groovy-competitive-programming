#include <stdio.h>

// --- Protótipos ---
double harmonica(int number);


// --- Main ---
int main()
{
    int N;
    printf(""); scanf("%d", &N);

    printf("%.4lf", harmonica(N));

    return 0;
}

// --- Funções ---
double harmonica(int number)
{
    double S = 0;

    for (int i = 1; i <= number; i++)
    {
        S += 1.0 / i;
    }

    return S;
}