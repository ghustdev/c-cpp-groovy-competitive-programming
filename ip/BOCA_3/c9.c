#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float pot = 1;
    float fatorial = 1;
    int sinal = -1;

    scanf("%f", &x);

    float cos_x = 1;

    for (int i = 1; i <= 38; i++)
    {
        pot *= x;
        fatorial *= (i);

        if (i % 2 == 0)
        {
            cos_x += (sinal*(pot / fatorial));
            sinal *= -1;
        }
    }

    printf("%.4f %.4f %.4f\n", cos_x, cos(x), (cos(x) - cos_x));

    return 0;
}