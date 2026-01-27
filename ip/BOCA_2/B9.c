#include <stdio.h>

int main() 
{
    float peso, altura, imc;
    
    scanf("%f %f", &peso, &altura);
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
    
    return 0;
}