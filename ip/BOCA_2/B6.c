#include <stdio.h>

int main() 
{
    int conta; 
    float limite, inicial, depositos, retiradas;

    scanf("%i %f %f %f %f", &conta, &limite, &inicial, &depositos, &retiradas);

    float saldo_final = inicial + depositos - retiradas;
    float saldo_limite = limite + inicial + depositos - saldo_final; //se precisar do limite

    if (limite < saldo_final) {
        printf("Credito excedido: %.5f\n", saldo_final);
    } else {
        printf("Saldo: %.5f\n", saldo_final);
    }
    
    return 0;
}