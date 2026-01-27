#include <stdio.h>

int main() {
    float velocidade = 1.0; 
    int segundos_por_dia = 86400;
    int dias_por_semana = 7;
    float distancia_em_metros, distancia_em_km;

    distancia_em_metros = velocidade * segundos_por_dia * dias_por_semana;

    distancia_em_km = distancia_em_metros / 1000;

    printf("A distância percorrida pela ave durante uma semana é: %.2f km\n", distancia_em_km);

    return 0;
}
