#include <stdio.h>

int main() {

    int N, K, M, i, j, k, soma_mult;
    
    scanf("%d %d %d", &N, &K, &M);
    
    int A[N][K];
    int B[K][M];
    int MULT[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++)
            scanf("%d", &A[i][j]);
    }
    for (i = 0; i < K; i++) {
        for (j = 0; j < M; j++)
            scanf("%d", &B[i][j]);
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            soma_mult = 0;
            for (k = 0; k < K; k++) {
                soma_mult += A[i][k] * B[k][j];
            }
            MULT[i][j] = soma_mult;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", MULT[i][j]);
        }
        printf("\n");
    }

    return 0;
}