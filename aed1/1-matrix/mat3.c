#include <stdio.h>
#include <stdlib.h>

typedef long long int lld; 

int main()
{
    int k; scanf("%d", &k);
    lld S[k], vet_tam_S[k];
    lld T = 1;
    
    for (int i=0; i<k; i++)
    {
        scanf("%lld", &S[i]);
        T *= S[i];
        vet_tam_S[i] = 1;
    }

    // // Tamanho da dimensão Sk
    // vet_tam_S[k-1] = 1;
    // for (int i=1; i<k; i++)
    // {
    //     // Tamanho da dimensão S1
    //     if (i>=1) vet_tam_S[0] *= S[i];
    //     // Tamanho da dimensão S2
    //     if (i>=2) vet_tam_S[1] *= S[i];
    //     // Tamanho da dimensão S3
    //     if (i>=3) vet_tam_S[2] *= S[i];
    //     // Tamanho da dimensão S4
    //     if (i>=4) vet_tam_S[3] *= S[i];
    // }

    vet_tam_S[k-1] = 1;
    for (int i = k-2; i >= 0; i--) {
        vet_tam_S[i] = vet_tam_S[i+1] * S[i+1];
    }

    lld *mat_uni = (lld*) malloc(T * sizeof(lld));
    for (lld i = 0; i < T; i++) scanf("%lld", &mat_uni[i]);

    int q;
    scanf("%d", &q);
    while (q--) 
    {
        char a; scanf(" %c", &a);
        lld id = 0;
        for (int i = 0; i < k; i++) {
            lld pos;
            scanf("%lld", &pos);
            id += pos * vet_tam_S[i];
        }
        lld x;
        scanf("%lld", &x);
        mat_uni[id] = x;
    }

    for (lld i = 0; i < T; i++) {
        printf("%lld", mat_uni[i]);
        if ((i+1) % S[k-1] == 0) printf("\n");
        else printf(" ");
    }

    free(mat_uni);

    return 0;
}
