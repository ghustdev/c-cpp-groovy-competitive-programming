#include <stdio.h>

int main() {
    float quantidade;

    printf("quantidade de frangos: "); scanf("%f", &quantidade);

    printf("gasto total com frangos: %.2f", quantidade*7.5);
    
    return 0;
}