#include <stdio.h>
#include <stdlib.h>

int n;
int valid = 0;

void caminho(int labirinto[][n], int aux[][n], int linha, int coluna);

int main() 
{
    scanf("%d", &n);

    int labirinto[n][n];
    int aux[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int in;
            scanf("%d", &in);
            labirinto[i][j] = in;
            aux[i][j] = 0;
        }
    }

    caminho(labirinto, aux, 0, 0);

    printf("%d", valid);

    return 0;
}

void caminho(int labirinto[][n], int aux[][n], int row, int col) {
    if (row == n-1 && col == n-1) {
        valid = 1;
        return;
    }

    if (!valid) {
        aux[row][col] = 1;
        if (labirinto[row][col+1] && col+1 < n && !aux[row][col-1])
            caminho(labirinto, aux, row, col+1);
        else if (labirinto[row+1][col] && row+1 < n && !aux[row-1][col])
            caminho(labirinto, aux, row+1, col);
        else if (labirinto[row][col-1] && col-1 > 0 && !aux[row][col-1])
            caminho(labirinto, aux, row, col-1);
        else if (labirinto[row-1][col] && row-1 > 0 && !aux[row+1][col])
            caminho(labirinto, aux, row-1, col);
        else return;
        aux[row][col] = 0;
    }
}