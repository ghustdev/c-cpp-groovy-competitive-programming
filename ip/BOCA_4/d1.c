#include <stdio.h>

// --- Macros ---
#define PI 3.14159265;

// --- Protótipos ---
double volumeEsfera(double r);


// --- main ---
int main()
{
    double r;
    printf(""); scanf("%lf", &r);

    printf("%.4lf", volumeEsfera(r));

    return 0;
}

// --- Funções ---
double volumeEsfera(double r)
{
    return (4/3.0) * (r * r * r) * PI;
}