#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int v;
    struct node *next;
} node;

struct queue
{
    node *start;
    node *end;
};

void init(struct queue *f)
{
    f->start = f->end = NULL;
}

void insert(struct queue *f, long long int x)
{
    node *new = (node *)malloc(sizeof(node));
    new->v = x;
    new->next = NULL;

    if (f->start == NULL)
    {
        f->start = new;
        f->end = new;
    }
    else
    {
        f->end->next = new;
        f->end = new;
    }
}

long long int remover(struct queue *f)
{
    if (f->start == NULL)
        return -1;
    node *aux = f->start;
    f->start = f->start->next;

    long long int v = aux->v;
    free(aux);

    if (f->start == NULL)
        f->end = NULL;

    return v;
}

long long int somar(struct queue *f)
{
    if (f->start == NULL)
        return -1;
    node *current = f->start;
    long long int soma;
    soma = current->v;
    while (current->next != NULL)
    {
        current = current->next;
        soma += current->v;
    }
    return soma;
}

int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    struct queue f;
    init(&f);

    for (long long int i = 1; i <= n; i++)
    {
        long long int x;
        scanf("%lld", &x);
        insert(&f, x);
        printf("%lld\n", somar(&f));
        if (i >= k)
            remover(&f);
    }

    return 0;
}