#include <stdio.h>

int main()
{
    int N, p_escalar = 0;
    scanf("%d", &N);

    int vet1[N];
    int vet2[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vet1[i]);
    }

    for (int j = 0; j < N; j++){
        scanf("%d", &vet2[j]);
    }

    for (int i = 0; i < N; i++)
    {
        p_escalar += vet1[i] * vet2[i];
    }

    printf("%d ", p_escalar);
    
    return 0;
}