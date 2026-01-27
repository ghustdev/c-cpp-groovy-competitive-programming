#include <stdio.h>
#include <stdlib.h>

void permutations();

int *v;
int *v_permutation;
short *chosen;
int n;
int tam = 0;

int main() 
{ 
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));
    v_permutation = (int *) malloc(n * sizeof(int));
    chosen = (short *) calloc(n, sizeof(short));

    for (int i=0; i<n; i++) { 
        v[i] = i+1;
    }

    permutations();

    free(v);
    free(v_permutation);
    free(chosen);

    return 0;
}

void push_back_permutation(int x) {
    v_permutation[tam] = x;
    tam++;
}

void pop_back_permutation() {
    tam--;
}

void permutations() {
    if (tam == n) {
        for (int j=0; j<n; j++)
            printf("%d ", v_permutation[j]);
        printf("\n");
    } else {
        for (int i=0; i<n; i++) {
            if (chosen[i]) continue;
            chosen[i] = 1;
            push_back_permutation(v[i]);
            permutations();
            chosen[i] = 0;
            pop_back_permutation();
        }
    }
}