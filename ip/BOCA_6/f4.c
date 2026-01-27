#include <stdio.h>

int main() {

    int M, N, i, k, key, x, isSort = 1;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];
    int transposta[M][N];

    for (i = 0; i < N; i++) {
        for (k = 0; k < M; k++) {
            scanf("%d", &matriz[i][k]);
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < N; i++) {
        for (k = 0; k < M; k++) {
            printf("%d ", matriz[i][k]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        for (k = 1; k < M; k++) {
            if (matriz[i][k - 1] > matriz[i][k])
                isSort = 0;
        }
        for (k = 0; k < M; k++)
            transposta[k][i] = matriz[i][k];
    }

    printf("Transposta:\n");
    for (i = 0; i < M; i++) {
        for (k = 0; k < N; k++) {
            printf("%d ", transposta[i][k]);
        }
        printf("\n");
    }

    for (i = 0; i < M; i++) {
        for (k = 1; k < N; k++) {
            if (transposta[i][k - 1] > transposta[i][k])
                isSort = 0;
        }
    }

    printf("%s\n", isSort ? "SIM" : "NAO");

    return 0;
}