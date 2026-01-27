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

void invert(struct stack * s1, struct stack * s2) {
    node * current = s1->end;

    while(current != NULL) {
        node * new = (node *)malloc(sizeof(node));
        new->v = current->v;

        if (s2->end == NULL) {
            new->next = NULL;
            s2->end = new;
        } else {
            new->next = s2->end;
            s2->end = new;
        }

        s1->end = s1->end->next;
        current = current->next;
    }
}

int pop(struct stack * s1, struct stack * s2) {
    if (s2->end == NULL && s1->end == NULL)
        return -1;
    if (s2->end == NULL && s1->end != NULL) {
        invert(s1, s2);
    }

    node * aux = s2->end;
    s2->end = s2->end->next;

    int v = aux->v;
    free(aux);

    return v;
}

int top(struct stack * s1, struct stack * s2) {
    if (s2->end == NULL && s1->end == NULL)
        return -1;
    if (s2->end == NULL && s1->end != NULL) {
        invert(s1, s2);
    }
    
    return s2->end->v;
}


int size(struct stack * s1, struct stack * s2) {
    int size_list = 0;

    node * current1 = s1->end;
    while(current1 != NULL) {
        current1 = current1->next;
        size_list++;
    }

    node * current2 = s2->end;
    while(current2 != NULL) {
        current2 = current2->next;
        size_list++;
    }

    return size_list;
}

void clear(struct stack * s1, struct stack * s2) {
    node * current1 = s1->end;

    while(current1 != NULL) {
        node * aux1 = current1;
        current1 = current1->next;
    
        free(aux1);
    }

    node * current2 = s2->end;

    while(current2 != NULL) {
        node * aux2 = current2;
        current2 = current2->next;
    
        free(aux2);
    }

    s1->end = NULL;
    s2->end = NULL;
}


int main() {
    int q; scanf("%d", &q);
    struct stack s1;
    struct stack s2;
    init(&s1);
    init(&s2);
    
    for (int i = 0; i < q; i++) {
        char c; scanf(" %c", &c);
        
        if (c == 'I') {
            int x; scanf("%d", &x);
            push(&s1, x);
            // printf("%i\n", x);
        } 
        else if (c == 'R') printf("%d\n", pop(&s1, &s2));
        else if (c == 'F') printf("%d\n", top(&s1, &s2));
        else if (c == 'S') printf("%d\n", size(&s1, &s2));
        else if (c == 'C') clear(&s1, &s2);
    }

    return 0;
}