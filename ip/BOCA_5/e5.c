#include <stdio.h>

int main()
{
    int N, output = 1, count = 1;
    scanf("%d", &N);

    int vet[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &vet[i]);

        if (vet[i] == (vet[i - 1] + 1)) {
            count++;
            if (count > output) output = count;
        } else {
            count = 1;
        }
    }

    printf("%d", output);

    return 0;
}