#include <stdio.h>

// --- Protótipos ---
void ordemCrescente(int n1, int n2, int n3);


// --- Main ---
int main()
{
    int n1, n2, n3;
    printf(""); scanf("%d %d %d", &n1, &n2, &n3);

    ordemCrescente(n1, n2, n3);

    return 0;
}

// --- Funções ---
void ordemCrescente(int n1, int n2, int n3)
{
    int vet[3] = {n1, n2, n3};

    for (int i = 1; i < 3; i++)
    {
        int j = i - 1;
        int key = vet[i];
        while (vet[j] > key && j >= 0) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = key;
    }
    printf("%d %d %d", vet[0], vet[1], vet[2]);

    // int temp;
    // if (n1 > n2) { temp = n1; n1 = n2; n2 = temp; }
    // if (n1 > n3) { temp = n1; n1 = n3; n3 = temp; }
    // if (n2 > n3) { temp = n2; n2 = n3; n3 = temp; }
}