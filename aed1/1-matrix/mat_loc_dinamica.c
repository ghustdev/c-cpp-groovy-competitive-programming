#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3, colunas = 4;

    int **m = malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        m[i] = malloc(colunas * sizeof(int));
    }

    for (int i=0; i<linhas; i++) 
    {
        for (int j=0; j<linhas; j++) 
        {
            printf("%d ", m[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        free(m[i]);  // libera cada linha
    }
    free(m);         // libera o vetor de ponteiros

}