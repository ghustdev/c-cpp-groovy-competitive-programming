// A Complexidade de Tempo do Heap Sort sempre é O(n log n), tanto no pior, médio e melhor caso;
// A Complexidade Espacial é O(1), ou seja, uma quantidade de memória constante.
// O Heapsort é eficiente em termos de espaço porque realiza as operações de ordenação dentro do próprio array, sem a necessidade de alocar memória adicional para estruturas de dados auxiliares.
// -----------------------------------------------------------------------------------

#include <stdio.h>

typedef long long int ll;
int size;
int n;

// Trocar elementos com base no ponteiro
void swap_elements(ll *a, ll *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Executa o max heap (não completo)
void heap_sort(ll v[], int father)
{
    if (father == -1)
    {
        swap_elements(&v[0], &v[size - 1]);
        size--;
        return;
    }

    int f1 = father * 2 + 1;
    if (father * 2 + 2 < size)
    {
        int f2 = father * 2 + 2;
        if (v[f1] > v[f2])
        {
            if (v[father] < v[f1])
                swap_elements(&v[father], &v[f1]);
        }
        else
        {
            if (v[father] < v[f2])
                swap_elements(&v[father], &v[f2]);
        }
    } else
    {
        if (v[father] < v[f1])
            swap_elements(&v[father], &v[f1]);
    }

    heap_sort(v, father - 1);
}

int main()
{
    scanf("%d", &n);
    size = n;

    ll v[n];
    for (int i=0; i<n; i++) scanf("%lld", &v[i]);

    while (size >= 1)
        heap_sort(v, size/2 - 1);

    for (int i = 0; i < n; i++)
        printf("%lld ", v[i]);

    return 0;
}