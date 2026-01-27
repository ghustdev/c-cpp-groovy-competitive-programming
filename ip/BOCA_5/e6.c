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

    // Insertion Sort
    for (int i = 0; i < N; i++)
    {
        int key = vet[i];    
        int j = i - 1;

        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = key;
    }

    // Selection Sort
    // int pos = i;
    // int min = vet[i];
    // for (int j = i + 1; j < N; j++){
    //     if (vet[j] < min) {
    //         min = vet[j];
    //         pos = j;
    //     }
    // }
    // int temp = vet[i];
    // vet[i] = min;
    // vet[pos] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}