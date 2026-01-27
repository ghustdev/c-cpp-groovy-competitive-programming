#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int *vectN;

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int binarySearch(int ini, int fin, int c) {
    while (ini <= fin) {
        int mid = (fin + ini)/2;

        if (c == vectN[mid]) return 1;
        else if (c > vectN[mid]) ini = mid+1;
        else if (c < vectN[mid]) fin = mid-1; 
    }
    return 0;
}

int main()
{
    int N, Q; scanf("%d %d", &N, &Q);
    vectN = (int *) malloc(N * sizeof(int));
    int size = sizeof(vectN) / sizeof(vectN[0]);

    for (int i=0; i<N; i++) {
        scanf("%d", &vectN[i]);
    }

    qsort(vectN, size, sizeof(int), cmp);
    

    for (int i=0; i<Q; i++) {
        int consult; scanf("%d", &consult);

        int ini = 0;
        int fin = N-1;

        printf("%d\n", binarySearch(ini, fin, consult));
    }

    return 0;
}