#include <stdio.h>

// Rotação 90 graus: rotacao[i][j] = matriz[N - 1 - j][i]
// for (int i = 0; i < N; i++)
//     for (int j = 0; j < N; j++)
//         rotacao_90[i][j] = matriz[N - 1 - j][i];

int main() {

    int N, i, j, limiteN;
    
    scanf("%d", &N);
    
    int matriz[N][N], rotacao_90_graus[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            scanf("%d", &matriz[i][j]);
    }
    limiteN = N;
    if (N % 2 != 0) {
        for (i = 0; i < limiteN; i++) {
            if (i == (limiteN - 1)) {
                rotacao_90_graus[i][i] = matriz[i][i]; 
                break;
            }
            for (j = i; j < limiteN - 1; j++) {
                if (N - 1 - j > i)
                    rotacao_90_graus[i][j] = matriz[N - 1 - j][i];
                if (j < limiteN - 1)
                    rotacao_90_graus[j][limiteN - 1] = matriz[i][j];
                if (N - 1 - j > i)
                    rotacao_90_graus[limiteN - 1][N - 1 - j] = matriz[j][limiteN - 1];
                if (N - 1 - j > i)
                    rotacao_90_graus[N - 1 - j][i] = matriz[limiteN - 1][N - 1 - j];
            }
            limiteN -= 1;
        }
    } 
    else {
        for (i = 0; i < limiteN; i++) {
            for (j = i; j < limiteN; j++) {
                if (N - 1 - j > i)
                    rotacao_90_graus[i][j] = matriz[N - 1 - j][i];
                if (j < limiteN - 1)
                    rotacao_90_graus[j][limiteN - 1] = matriz[i][j];
                if (N - 1 - j > i)
                    rotacao_90_graus[limiteN - 1][N - 1 - j] = matriz[j][limiteN - 1];
                if (N - 1 - j > i)
                    rotacao_90_graus[N - 1 - j][i] = matriz[limiteN - 1][N - 1 - j];
            }
            limiteN -= 1;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", rotacao_90_graus[i][j]);
        printf("\n");
    }

    return 0;
}