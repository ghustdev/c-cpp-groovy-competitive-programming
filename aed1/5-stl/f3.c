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

void push(struct queue * f, int x) {
    node * new = (node *)malloc(sizeof(node));
    new->v = x;
    new->next = NULL;

    if (f->start == NULL) {
        f->start = f->end = new;
    } else {
        f->end->next = new;
        f->end = new;
    }
}

int pop(struct queue * f) {
    if (f->start == NULL)
        return -1;

    if (f->start == f->end) {
        int v = f->end->v;
        free(f->end);
        f->start = f->end = NULL;
        return v;
    }

    node * aux = f->start;
    int v = f->start->v;
    f->start = aux->next;
    free(aux);

    return v;
}

int top(struct queue * f) {
    if (f->start == NULL)
        return -1;
    
    return f->start->v;
}


int size(struct queue * f) {
    int size_list = 0;

    node * current = f->start;
    while(current != NULL) {
        current = current->next;
        size_list++;
    }

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

void mostrar(struct queue * f) {
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

void push_stack(struct queue * f, int x) {
    push(f, x); 

    int n = size(f) - 1; 

    for (int i = 0; i < n; i++) {
        int v = pop(f); 
        
        push(f, v);    
    }
}

int main() {
    int q; scanf("%d", &q);
    struct queue f;
    init(&f);
    
    for (int i = 0; i < q; i++) {
        char c; scanf(" %c", &c);
        
        if (c == 'P') {
            int x; scanf("%d", &x);
            push_stack(&f, x);
        } 
        else if (c == 'O') printf("%d\n", pop(&f));
        else if (c == 'T') printf("%d\n", top(&f));
        else if (c == 'S') printf("%d\n", size(&f));
        else if (c == 'C') clear(&f);
        else if (c == 'M') mostrar(&f);
    }

    return 0;
}