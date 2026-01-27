#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int v;
    struct node * next;
} node;

struct queue {
    node * start;
    node * end;
};

void init(struct queue * f) {
    f->start = f->end = NULL;
}

void insert(struct queue * f, int x) {
    node * new = (node *)malloc(sizeof(node));
    new->v = x;
    new->next = NULL;

    if (f->start == NULL) {
        f->start = new;
        f->end = new;
    } else {
        f->end->next = new;
        f->end = new;
    }
}

int remover(struct queue * f) {
    if (f->start == NULL)
        return -1;
    node * aux = f->start;
    f->start = f->start->next;

    int v = aux->v;
    free(aux);

    if (f->start == NULL)
        f->end = NULL;

    return v;
}

int back(struct queue * f) {
    if (f->end == NULL)
        return -1;
    
    return f->end->v;
}

int front(struct queue * f) {
    if (f->start == NULL)
        return -1;
    
    return f->start->v;
}

int size(struct queue * f) {
    int size_list = 0;
    if (f->start == NULL)
        return size_list;
    node * current = f->start;
    while(current->next != NULL) {
        current = current->next;
        size_list++;
    }

    size_list++;

    return size_list;
}

void clear(struct queue * f) {
    node * current = f->start;
    while(current != NULL) {
        node * aux = current;
        current = current->next;
    
        free(aux);
    }

    f->start = f->end = NULL;
}

void print(struct queue * f) {
    if (f->start == NULL) {
        printf(" \n");
        return;
    }
    node * current = f->start;
    printf("%d ", current->v);
    while(current->next != NULL) {
        current = current->next;
        printf("%d ", current->v);
    }
    printf("\n");
}

int main() {
    int q; scanf("%d", &q);
    struct queue f;
    init(&f);
    
    for (int i = 0; i < q; i++) {
        char c; scanf(" %c", &c);
        
        if (c == 'I') {
            int x; scanf("%d", &x);
            insert(&f, x);
        } 
        else if (c == 'R') printf("%d\n", remover(&f));
        else if (c == 'F') printf("%d\n", front(&f));
        else if (c == 'B') printf("%d\n", back(&f));
        else if (c == 'S') printf("%d\n", size(&f));
        else if (c == 'C') clear(&f);
        else if (c == 'P') print(&f);
    }

    return 0;
}