#include <stdio.h>

int main() 
{
    int x_dias;
    
    scanf("%i", &x_dias);
    
    float d_percorrida_km_dia = (float) (60 * 60 * 24) / 1000;

    printf("%.1f", (d_percorrida_km_dia * x_dias));

    return 0;
}