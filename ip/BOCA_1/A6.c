#include <stdio.h>

int main() 
{
    float x, real;
    const float DOLAR = 5.05;    

    scanf("%f", &x);

    real = x * DOLAR;

    printf("%.6f", real);
    return 0;
}