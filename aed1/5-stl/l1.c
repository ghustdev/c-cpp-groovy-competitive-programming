#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int v;
    struct no *nxt;
} no;

struct lista
{
    int sz;
    no *inicio;
};

void inicializa(struct lista *l)
{
    l->sz = 0;
    l->inicio = NULL;
}

void insere(struct lista *l, int i, int v)
{
    if (i > l->sz)
    {
        printf("-1\n");
        return;
    }
    no *novo = (no *)malloc(sizeof(no));
    novo->v = v;
    if (l->sz == 0 || i == 0)
    {
        novo->nxt = l->inicio;
        l->inicio = novo;
    }
    else
    {
        no *p = l->inicio;
        while (i > 1)
        {
            p = p->nxt;
            i--;
        }
        novo->nxt = p->nxt;
        p->nxt = novo;
    }
    l->sz++;
}

void deleta(struct lista *l, int i)
{
    if (l->sz < i + 1)
    {
        printf("-1\n");
        return;
    }

    l->sz--;
    if (i == 0)
    {
        no *aux = l->inicio;
        l->inicio = l->inicio->nxt;
        free(aux);
    }
    else
    {
        no *p = l->inicio;
        while (i > 1)
        {
            p = p->nxt;
            i--;
        }
        no *aux = p->nxt;
        p->nxt = p->nxt->nxt;
        free(aux);
    }
}

int imprime(struct lista *l, int i)
{
    if (l->sz < i + 1)
        return -1;
    no *p = l->inicio;
    while (i > 0)
    {
        p = p->nxt;
        i--;
    }
    return p->v;
}

void imprime_lista(struct lista *l)
{
    no *p = l->inicio;
    while (p != NULL)
    {
        printf("%d ", p->v);
        p = p->nxt;
    }
    printf("\n");
}

int tamanho_lista(struct lista *l)
{
    return l->sz;
}

int main()
{
    struct lista l;
    inicializa(&l);
    int q;
    scanf("%d", &q);
    while (q--)
    {
        char c;
        scanf("\n%c", &c);
        if (c == 'I')
        {
            int p, x;
            scanf("%d %d", &p, &x);
            insere(&l, p, x);
        }
        if (c == 'R')
        {
            int p;
            scanf("%d", &p);
            deleta(&l, p);
        }
        if (c == 'G')
        {
            int p;
            scanf("%d", &p);
            printf("%d\n", imprime(&l, p));
        }
        if (c == 'T')
            printf("%d\n", tamanho_lista(&l));

        if (c == 'P')
            imprime_lista(&l);
    }
}