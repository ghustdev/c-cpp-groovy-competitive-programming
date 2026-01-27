#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int v;
    struct node * next;
    struct node * prev;
} node;

struct list {
    int sz;
    node * start;
    node * end;
};

void init(struct list * l) {
    l->sz = 0;
    l->start = l->end = NULL;
}

void inserir(struct list * l, int v) {    
    node * new = (node *) malloc(sizeof(node));
    new->v = v;

    if (l->sz == 0) {
        new->next = NULL;
        new->prev = NULL;
        l->start = new;
        l->end = new;
    } else {
        new->prev = l->end;
        l->end->next = new;
        new->next = NULL;
        l->end = new;

        // node * aux = l->start;
        // int i = 0;
        // while (i < l->sz - 1) {
        //     aux = aux->next;
        //     i--;
        // }

        // new->next = aux->next;
        // aux->next = new;
    }

    l->sz++;
}

void selection_sort(struct list * l) {
    if (l->sz == 1) return;

    node * initial = l->start;
    for (int i=0; i < l->sz-1; i++) {
        node * min_node = initial;
        node * it = initial->next;

        for (int j=i+1; j < l->sz; j++) {
            if (it->v < min_node->v) {
                min_node = it;
            }

            it = it->next;
        }

        int temp = initial->v;
        initial->v = min_node->v;
        min_node->v = temp;

        initial = initial->next;
    }
}

void imprimir(struct list * l) {
    node * aux = l->start;
    for (int i=0; i<l->sz; i++) {
        printf("%d ", aux->v);
        aux = aux->next;
    }
}

int main() {
    struct list l;
    init(&l);

    int n; scanf("%d", &n);

    for (int i=0; i<n; i++) {
        int v; scanf("%d", &v);
        inserir(&l, v); 
    }

    selection_sort(&l);

    imprimir(&l);

    return 0;
}
