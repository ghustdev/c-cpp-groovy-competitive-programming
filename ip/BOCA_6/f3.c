#include <stdio.h>

int main() {

    int M, N, i, j, soma_index = 0;;
    
    scanf("%d %d", &N, &M);
    
    int matriz[N][M];
    int soma_vizinhos_matriz[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (i - 1 >= 0) {
                soma_index += matriz[i - 1][j];
                if (j - 1 >= 0)
                    soma_index += matriz[i - 1][j - 1] + matriz[i][j - 1];
                if (j + 1 < M)
                    soma_index += matriz[i - 1][j + 1] + matriz[i][j + 1];
            } 
            if (i - 1 < 0) {
                if (j - 1 >= 0)
                    soma_index += matriz[i][j - 1];
                if (j + 1 < M)
                    soma_index += matriz[i][j + 1];
            }
            if (i + 1 < N) {
                soma_index += matriz[i + 1][j];
                if (j - 1 >= 0)
                    soma_index += matriz[i + 1][j - 1];
                if (j + 1 < M)
                    soma_index += matriz[i + 1][j + 1];
            }
            soma_vizinhos_matriz[i][j] = soma_index;
            soma_index = 0;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", soma_vizinhos_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}