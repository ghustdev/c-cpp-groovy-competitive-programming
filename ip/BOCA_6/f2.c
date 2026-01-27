#include <stdio.h>

int main() {

    int M, N, i, k, s_row, s_col;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];
    int transposta[M][N];

    for (i = 0; i < N; i++) {
        for (k = 0; k < M; k++) {
            scanf("%d", &matriz[i][k]);
        }
    }

    for (i = 0; i < N; i++) {
        s_row = 0;
        for (k = 0; k < M; k++) {
            s_row += matriz[i][k];
            transposta[k][i] = matriz[i][k];
        }
        printf("%d ", s_row);
    }

    printf("\n");
    for (i = 0; i < M; i++) {
        s_col = 0;
        for (k = 0; k < N; k++) {
            s_col += transposta[i][k];
        }
        printf("%d ", s_col);
    }

    return 0;
}