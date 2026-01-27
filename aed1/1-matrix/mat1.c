#include <stdio.h>

int main()
{
    int i, j, k, n;

    scanf("%d", &n);
    int mat[n][n];
    int y = n / 2, x = 0;
    // y e x são as coordenadas do centro da matriz que simularão dois for's
    // 0 <= x e y <= n-1 

    for (j = 0; j < n; j++){
        for (k = 0; k < n; k++)
            mat[j][k] = 0;
    }

    for (i = 1; i <= n*n; i++) {
        if (i == 1)
            mat[x][y] = i;
        else if ((x - 1) > -1 && (y - 1) > -1) {
            if (mat[x - 1][y - 1] == 0) {
                y--;
                x--;
                mat[x][y] = i;
            } else {
                x++;
                mat[x][y] = i;
            }
        }
        else if ((x - 1) < 0 && (y - 1) > -1) {
            if (mat[(n - 1) / (1 + x)][y - 1] == 0) {
                y--;
                x = (n - 1) / (1 + x);
                mat[x][y] = i;
            } else break;
        }
        else if ((x - 1) > -1 && (y - 1) < 0) {
            if (mat[x - 1][(n - 1) / (1 + y)] == 0) {
                x--;
                y = (n - 1) / (1 + y);
                mat[x][y] = i;
            } else break;
        }
        else if ((x - 1) < 0 && (y - 1) < 0) {
            if (mat[x + 1][y] == 0) {
                x++;
                mat[x][y] = i;
            } else break;
        }
    }

    for (j = 0; j < n; j++){
        for (k = 0; k < n; k++)
            printf("%d ", mat[j][k]);
        printf("\n");
    }

    return 0;
}