#include <stdio.h>

int main()
{
    float X;
    float pot = 1.0;
    float fatorial = 1;
    int sinal = -1;

    scanf("%f", &X);

    float S = X;

    for (int i = 1; i <= 19; i++)
    {
        // Calculate the power of i
        pot *= X;
        // Calculate the factorial of i
        fatorial *= (i);

        S += sinal*(pot / fatorial);
        sinal *= -1;
    }

    printf("%f\n", S);

    return 0;
}