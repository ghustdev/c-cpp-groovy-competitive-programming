#include <stdio.h>

int main() {

    int N, M, i, j, maior;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];
    int vet_maior_linha[N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);
    }
    for (i = 0; i < N; i++) {
        maior = 0;
        for (j = 0; j < M; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];}
        vet_maior_linha[i] = maior;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%.6f ", (matriz[i][j] / (float) vet_maior_linha[i]));
    }

    return 0;
}