#include <stdio.h>

int main()
{
    int n = 4;
    int T = 1, P = 1, C = 1;

    for (int i=0; i<n; i++) 
    {
        int tam;
        scanf("%d", &tam);

        T *= tam; 
        if (i >= 2) C *= tam;
        if (i >= 1) P *= tam;
        printf(" %d \n", T);
    }

    printf("%d %d", P, C);

    return 0;
}
