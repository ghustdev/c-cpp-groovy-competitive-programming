#include <stdio.h>
#include <stdlib.h>

int *vectN;

int binarySearch(int ini, int fin, int c) {
    if (ini > fin) return 0;

    int mid = (fin + ini)/2 ;
    if (c > vectN[mid]) return binarySearch(mid+1, fin, c);
    else if (c < vectN[mid]) return binarySearch(ini, mid-1, c);

    return 1;
}

int main()
{
    int N, Q; scanf("%d %d", &N, &Q);
    vectN = (int *) malloc(N * sizeof(int));

    for (int i=0; i<N; i++) {
        scanf("%d", &vectN[i]);
    }    

    for (int i=0; i<Q; i++) {
        int consult; scanf("%d", &consult);

        int ini = 0;
        int fin = N-1;

        printf("%d\n", binarySearch(ini, fin, consult));
    }

    return 0;
}