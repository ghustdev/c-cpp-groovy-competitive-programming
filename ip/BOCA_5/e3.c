#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (N == 1) {
            printf("%d ", 0);
        } else {
            if (i - 1 < 0) {
                printf("%d ", vet[i + 1]);
            } else if (i + 1 > N - 1) {
                printf("%d ", vet[i - 1]);
            } else {
                printf("%d ", (vet[i - 1] + vet[i + 1]));
            }
        }
    }

    return 0;
}