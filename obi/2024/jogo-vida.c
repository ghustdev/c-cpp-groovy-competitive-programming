#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 50

int verifica(char matriz[MAX_N][MAX_N]) {
    
}

int main() 
{
    int N, Q = 1, i, j, k;
    
    scanf("%d", &N);
    char matriz[N][N];
    
    // for (i = 0; i < N; i++) {
    //     for (j = 0; j < N; j++)
    //         matriz[i][j] = 0;
    // }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            scanf("%c", matriz[i][j]);
    }

    for (i = 0; i < Q; i++) {

    }

    return 0;
}