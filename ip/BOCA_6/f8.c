#include <stdio.h>
#include <math.h>

#define E 2.7182818
int N, M;
double softmax(int line, int x, int matriz[N][M]);

int main() {

    int i, j;
    
    scanf("%d %d", &N, &M);

    int matriz[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);
    }

    for (i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%.6lf", softmax(i, matriz[i][j], matriz));
            if (j < M - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}

double softmax(int line, int x, int matriz[N][M]) {
    long double somatorio = 0.0, somatorio1 = 0.0;
    for (int j = 0; j < M; j++) {
        if (matriz[line][j] % 2 == 0) {
            if (matriz[line][j] > 500)
                somatorio1 += pow(E, matriz[line][j] / 2) * pow(E, matriz[line][j] / 2);
            else
                somatorio += pow(E, matriz[line][j]);
        }
        else {
            if (matriz[line][j] > 500)
                somatorio1 += pow(E, matriz[line][j] / 2) * pow(E, matriz[line][j] / 2 + 1);
            else
                somatorio += pow(E, matriz[line][j]);
        }
    }
    if (x % 2 == 0 && x > 500)
        return pow(E, x / 2) * pow(E, x / 2) / somatorio1;
    if (x % 2 != 0 && x > 500)
        return ((pow(E, x / 2) * pow(E, x / 2 + 1)) / somatorio1);
    if (x < 500)
        return pow(E, x) / somatorio;
    return 0.0;
}