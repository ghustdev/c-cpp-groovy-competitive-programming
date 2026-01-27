/* A solução é usar uma estrutura de acesso rápido, como:

qsort + bsearch (vetor ordenado e busca binária) → O(log n) por consulta.

tabela hash (via unordered_map em C++ ou uthash em C puro) → O(1) em média.

🔹 Opção 1: Ordenar e buscar (mais simples em C) */

#include <stdio.h>
#include <stdlib.h>

typedef long long int lli;

typedef struct {
    lli ind;
    int val;
} mat_spr;

int cmp(const void *a, const void *b) {
    lli x = ((mat_spr*)a)->ind;
    lli y = ((mat_spr*)b)->ind;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int q; 
    scanf("%d", &q);

    mat_spr *V = malloc(q * sizeof(mat_spr));
    int indV = 0;

    for (int i = 0; i < q; i++) {
        char op; scanf(" %c", &op);
        if (op == 'A') {
            lli idx; int x;
            scanf("%lld %d", &idx, &x);

            // procura com bsearch
            mat_spr key = {idx, 0};
            mat_spr *ptr = bsearch(&key, V, indV, sizeof(mat_spr), cmp);

            /* 
            void *bsearch(
                const void *key,   // O que queremos procurar
                const void *base,  // O vetor onde procurar
                size_t nmemb,      // Quantos elementos tem o vetor
                size_t size,       // Tamanho de cada elemento
                int (*compar)(const void *, const void *) // Função de comparação
            );

            No nosso caso:

            &key → ponteiro para o que queremos procurar (mat_spr {idx, 0}).

            V → início do vetor onde vamos procurar.

            indV → quantidade de elementos atualmente em V.

            sizeof(mat_spr) → tamanho de cada elemento do vetor (precisa porque bsearch trabalha com void*).

            cmp → função de comparação que diz como comparar dois mat_spr (no caso, compara pelo campo .ind). */

            if (ptr) {
                ptr->val = x; // atualiza
            } else {
                V[indV].ind = idx;
                V[indV].val = x;
                indV++;
                qsort(V, indV, sizeof(mat_spr), cmp); // mantém ordenado
            }
        } else if (op == 'C') {
            lli idx; scanf("%lld", &idx);
            mat_spr key = {idx, 0};
            mat_spr *ptr = bsearch(&key, V, indV, sizeof(mat_spr), cmp);

            if (ptr) printf("%d\n", ptr->val);
            else printf("0\n");
        }
    }

    free(V);
    return 0;
}


/* ✅ Agora cada consulta é O(log n) (graças ao bsearch), bem mais rápido do que percorrer tudo.

🔹 Opção 2: Usar hash (bem mais rápido, mas precisa lib)

Em C puro não tem map pronto, mas dá pra usar a biblioteca uthash.h (super leve, cabe em 1 arquivo). Com ela, cada operação vira praticamente O(1). */