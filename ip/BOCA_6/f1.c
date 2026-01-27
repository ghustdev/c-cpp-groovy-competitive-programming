#include <stdio.h>

int main() {

    int M, N, i, k;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];
    int transposta[M][N];

    for (i = 0; i < N; i++) {
        for (k = 0; k < M; k++) {
            scanf("%d", &matriz[i][k]);
        }
    }

    for (i = 0; i < N; i++) {
        for (k = 0; k < M; k++) {
            transposta[k][i] = matriz[i][k];
        }
    }

    for (i = 0; i < M; i++) {
        for (k = 0; k < N; k++) {
            printf("%d ", transposta[i][k]);
        }
    }

    return 0;
}