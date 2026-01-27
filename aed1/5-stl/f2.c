#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int v;
    struct no *nxt;
} no;

struct fila
{
    no *inicio;
    no *fim;
};

void inicializa(struct fila *f)
{
    f->inicio = f->fim = NULL;
}

void insere(struct fila *f, int x)
{
    no *novo = (no *)malloc(sizeof(no));
    novo->v = x;
    novo->nxt = NULL;
    if (f->inicio == NULL)
    {
        f->inicio = novo;
        f->fim = novo;
    }
    else
    {
        f->fim->nxt = novo;
        f->fim = novo;
    }
}

int deleta(struct fila *f, long long int x)
{
    if (f->inicio == NULL)
        return -1;

    no *aux = f->inicio;
    for (int i = 0; i < x - 2; i++)
        f->inicio = f->inicio->nxt;

    f->fim = f->inicio;

    aux = f->inicio->nxt;

    f->inicio = f->inicio->nxt->nxt;
    f->fim->nxt = f->inicio;
    int v = aux->v;
    free(aux);

    return v;
}

int main()
{
    struct fila f;
    inicializa(&f);

    long long int n, k;
    scanf("%lld %lld", &n, &k);

    for (long long int i = 1; i <= n; i++)
        insere(&f, i);
    
    f.fim->nxt = f.inicio; // Conecta de forma ciclica
    while (f.fim != f.inicio)
        printf("%d ", deleta(&f, k));

    printf("\n%d", f.inicio->v);
}