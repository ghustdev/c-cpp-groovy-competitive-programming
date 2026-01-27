#include <stdio.h>

int main() 
{
    float vendas;

    scanf("%f", &vendas);

    if (vendas > 15000)
    {
        printf("%.5f\n", (500 + 800 + vendas * 0.09));
    } else {
        printf("%.5f\n", (500 + vendas * 0.09));
    }
    
    return 0;
}