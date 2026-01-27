#include <stdio.h>

int main() {

    int N, M, i, j, limiteN, limiteM, count = 0;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);
    }

    limiteN = N;
    limiteM = M;
    for (i = 0; i < limiteN; i++) {
        for (j = i; j < limiteM; j++) {
            printf("%d ", matriz[i][j]);
            count++;
        }
        for (j = i; j < limiteN && count < M*N; j++) {
            if (j > i) {
                printf("%d ", matriz[j][limiteM - 1]);
                count++;
            }        
        }
        for (j = limiteM - 2; j >= i && count < M*N; j--) {
            printf("%d ", matriz[limiteN - 1][j]);    
            count++;
        }
        for (j = limiteN - 2; j > i && count < M*N; j--) {
            printf("%d ", matriz[j][i]);
            count++;
        }
        limiteN--;
        limiteM--;
    }

    return 0;
}