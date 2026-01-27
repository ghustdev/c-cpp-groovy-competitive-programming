#include <stdio.h>

int main()
{
    int N, k, i, j, key, cont = 1;
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 1; i < N; i++) {
        key = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] =  key;
    }

    for (j = 1; j < N; j++) {
        if (vet[j - 1] < vet[j])
            cont++;
    }

    printf("%d ", cont);
    
    return 0;
}