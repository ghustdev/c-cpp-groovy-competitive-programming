#include <stdio.h>
#include <stdlib.h>

int N, Q;

int busca(int mat[][N], int c) {
    int i = 0;
    int j = N-1;

    while (j >= 0 && i < N) {
        if (mat[i][j] == c) return 1;
        else if (c < mat[i][j]) j--;
        else i++;
    }

    return 0;
}

int main()
{
    scanf("%d %d", &N, &Q);
    int mat[N][N];

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            scanf("%d", &mat[i][j]);
    }    

    for (int i=0; i<Q; i++) {
        int consult; scanf("%d", &consult);

        printf("%d\n", busca(mat, consult));
    }

    return 0;
}