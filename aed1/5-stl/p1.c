#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int v;
    struct node * next;
} node;

struct stack {
    node * end;
};

void init(struct stack * f) {
    f->end = NULL;
}

void push(struct stack * f, int x) {
    node * new = (node *)malloc(sizeof(node));
    new->v = x;
    
    if (f->end == NULL) {
        new->next = NULL;
        f->end = new;
    } else {
        new->next = f->end;
        f->end = new;
    }
}

int pop(struct stack * f) {
    if (f->end == NULL)
        return -1;

    node * aux = f->end;
    f->end = f->end->next;

    int v = aux->v;
    free(aux);

    return v;
}

int top(struct stack * f) {
    if (f->end == NULL)
        return -1;
    
    return f->end->v;
}


int size(struct stack * f) {
    int size_list = 0;

    node * current = f->end;
    while(current != NULL) {
        current = current->next;
        size_list++;
    }

    return size_list;
}

void clear(struct stack * f) {
    node * current = f->end;

    while(current != NULL) {
        node * aux = current;
        current = current->next;
    
        free(aux);
    }

    f->end = NULL;
}

void print(struct stack * f) {
    if (f->end == NULL) {
        printf(" \n");
        return;
    }

    node * current = f->end;
    printf("%d ", current->v);

    while(current->next != NULL) {
        current = current->next;
        printf("%d ", current->v);
    }
    printf("\n");
}

int main() {
    int q; scanf("%d", &q);
    struct stack f;
    init(&f);
    
    for (int i = 0; i < q; i++) {
        char c; scanf(" %c", &c);
        
        if (c == 'I') {
            int x; scanf("%d", &x);
            push(&f, x);
        } 
        else if (c == 'R') printf("%d\n", pop(&f));
        else if (c == 'T') printf("%d\n", top(&f));
        else if (c == 'S') printf("%d\n", size(&f));
        else if (c == 'C') clear(&f);
        else if (c == 'P') print(&f);
    }

    return 0;
}