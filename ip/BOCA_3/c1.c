#include <stdio.h>

int main()
{
    int n;
    int soma = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%i ", i);
        soma += i;
    }

    printf("\n%i", soma);
    
    return 0;
}