#include <stdio.h>

int main()
{
    int linhas = 3, colunas = 4;
    int M[3][4] = {
        {20, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}};

    int V[12];
    int k = 0;

    // Copiar matriz para vetor linear
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            int pos = 0 + colunas * (i - 0) + (j - 0);
            V[pos] = M[i][j];
            k++;
        }
    }

    // Mostrar vetor
    for (int i = 0; i < k; i++)
    {
        printf("%d ", V[i]);
    }
    return 0;
}
