#include <stdio.h>

int main()
{
    float x;
    int pot = 1;
    int fatorial = 1;
    float A = 0.0;

    scanf("%f", &x);

    while (A <= (x + 0.01))
    {
        float sin_a = 0.0;

        sin_a = A - (A * A * A / 6) + (A * A * A * A * A / 120) - (A * A * A * A * A * A * A / 5040);

        printf("%.1f %.4f\n", A, sin_a);

        A += 0.1;
    }

    return 0;
}