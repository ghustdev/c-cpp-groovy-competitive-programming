#include <stdio.h>
#include <math.h>

// --- Protótipos ---
double distancia(double n1, double n2, double n3, double n4);


// --- Main ---
int main()
{
    double n1, n2, n3, n4;
    printf(""); scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    printf("%.4lf", distancia(n1, n2, n3, n4));

    return 0;
}

// --- Funções ---
double distancia(double n1, double n2, double n3, double n4)
{
    return sqrt((n1 - n3) * (n1 - n3) + (n2 - n4) * (n2 - n4));
}