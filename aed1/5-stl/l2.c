#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    long long int v;
    struct no *nxt;
    struct no *ant;
} no;

struct lista
{
    long long int sz;
    no *inicio;
    no *fim;
};

void inicializa(struct lista *l)
{
    l->sz = 0;
    l->inicio = l->fim = NULL;
}

void insere(struct lista *l, long long int i, long long int v)
{
    if (i > l->sz)
    {
        printf("-1\n");
        return;
    }
    no *novo = (no *)malloc(sizeof(no));
    novo->v = v;
    novo->nxt = NULL;
    novo->ant = NULL;
    if (l->sz == 0 || i == 0)
    {
        if (l->sz == 0)
        {
            novo->nxt = l->inicio;
            l->inicio = novo;
            l->fim = novo;
        }
        else if (i == 0)
        {
            novo->nxt = l->inicio;
            novo->nxt->ant = novo;
            l->inicio = novo;
        }
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
        novo->ant = p;
        if (novo->nxt != NULL)
            novo->nxt->ant = novo;
        else
            l->fim = novo;

        p->nxt = novo;
    }
    l->sz++;
}

void deleta(struct lista *l, long long int i)
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
        if (l->inicio != NULL)
            l->inicio->ant = NULL;
        else
            l->fim = NULL;

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
        if (p->nxt != NULL)
            p->nxt->ant = p;
        else
            l->fim = p;

        free(aux);
    }
}

long long int imprime(struct lista *l, long long int i)
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
        printf("%lld ", p->v);
        p = p->nxt;
    }
    printf("\n");
}

void imprime_lista_inversa(struct lista *l)
{
    no *p = l->fim;

    while (p != NULL)
    {
        printf("%lld ", p->v);
        p = p->ant;
    }
    printf("\n");
}

long long int tamanho_lista(struct lista *l)
{
    return l->sz;
}

int main()
{
    struct lista l;
    inicializa(&l);
    long long int q;
    scanf("%lld", &q);
    while (q--)
    {
        char c;
        scanf("\n%c", &c);
        if (c == 'I')
        {
            long long int p, x;
            scanf("%lld %lld", &p, &x);
            insere(&l, p, x);
        }
        if (c == 'R')
        {
            long long int p;
            scanf("%lld", &p);
            deleta(&l, p);
        }
        if (c == 'G')
        {
            long long int p;
            scanf("%lld", &p);
            printf("%lld\n", imprime(&l, p));
        }
        if (c == 'T')
            printf("%lld\n", tamanho_lista(&l));

        if (c == 'P')
        {
            char lado;
            scanf("%c", &lado);
            if (lado == 'L')
                imprime_lista(&l);
            if (lado == 'R')
                imprime_lista_inversa(&l);
        }
    }
}