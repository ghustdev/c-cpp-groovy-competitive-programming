#include <stdio.h>

int binaria(int n, int N[], int ini, int fim) {
    int meio = (ini + fim) / 2;
    if (N[meio] == n)
        return meio;
    else if (N[meio] > n) {
        fim = meio - 1;
        binaria(n, N, ini, fim);
    }
    else if (N[meio] < n) {
        ini = meio + 1;
        binaria(n, N, ini, fim);
    }
    if (ini > fim) 
        return -1;
}

int main() {
    int N[] = {1,2,3,4,5};
    int n;
    int ini = 0, fim = 4;

    scanf("%d", &n);
    printf("%d", binaria(n, N, ini, fim));

    return 0;
}