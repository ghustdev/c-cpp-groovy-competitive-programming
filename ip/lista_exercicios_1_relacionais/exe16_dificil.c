#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero em MCDU (milhar centena dezena unidade): ");
    scanf("%i", &numero);

    char numero_str[4];
    
    numero_str[0] = (numero / 1000) % 10;
    numero_str[1] = (numero / 100) % 10;   
    numero_str[2] = (numero / 10) % 10;    
    numero_str[3] = numero % 10;          

    char temp = numero_str[0];
    numero_str[0] = numero_str[3];
    numero_str[3] = temp;
    temp = numero_str[1];
    numero_str[1] = numero_str[2];
    numero_str[2] = temp;

    printf("Numero invertido: %i%i%i%i\n", numero_str[0], numero_str[1], numero_str[2], numero_str[3]);

    int invertido = (numero_str[0]) * 1000 + (numero_str[1]) * 100 + (numero_str[2]) * 10 + (numero_str[3]);

    printf("Numero invertido como inteiro: %i\n", invertido);

    return 0;
}
