#include <stdio.h>

int main() {

    int N, M, i, j, di, dj, conv;
    
    scanf("%d %d", &N, &M);
    
    int A[N][M];
    int F[3][3];
    int C[N-2][M-2];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            scanf("%d", &A[i][j]);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            scanf("%d", &F[i][j]);
    }
    for (i = 1; i < N - 1; i++) {
        for (j = 1; j < M - 1; j++) {
            conv = 0;
            for (di = -1; di < 2; di++) {
                for (dj = -1; dj < 2; dj++)
                    conv += A[i + di][j + dj] * F[di + 1][dj + 1];
            }
            C[i][j] = conv;
        }
    }

    for (i = 1; i < N - 1; i++) {
        for (j = 1; j < M - 1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}