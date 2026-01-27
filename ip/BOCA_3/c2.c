#include <stdio.h>
#include <math.h>

int main()
{
    int l, r;
    int soma = 0;
    int cont = 0;

    scanf("%d %d", &l, &r);

    if ((l >= 1 && l <= 10*10*10*10) && (r >= 1 && r <= 10*10*10*10)) {
        for (int i = l; i <= r; i++) {
            if (i % 2 == 0) {
                soma += i;
                cont++;
            }
        }
        if (l != r) {
            printf("%d\n%d", soma, (soma/cont));
        }
        if (l == r) {
            printf("%d\n%d", (l-r), (l-r));
        }
    } else {
        printf("Valores invalidos\n");
    }
    
    return 0;
}