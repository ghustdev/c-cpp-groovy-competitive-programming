#include <stdio.h>

int main() {
    float quilowatts;
    const float PRECO = 0.671;

    printf("quilowatts consumida na residencia: "); scanf("%f", &quilowatts);

    printf("preco total: %.3f\n", quilowatts*PRECO);
    printf("preco total com desconto de 20%%: %.3f\n", quilowatts*PRECO*0.8);
    
    return 0;
}