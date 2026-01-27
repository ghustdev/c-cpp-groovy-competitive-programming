// A Complexidade de Tempo do Heap Sort sempre é O(n log n), tanto no pior, médio e melhor caso;
// A Complexidade Espacial é O(1), ou seja, uma quantidade de memória constante.
// O Heapsort é eficiente em termos de espaço porque realiza as operações de ordenação dentro do próprio array, sem a necessidade de alocar memória adicional para estruturas de dados auxiliares.
// -----------------------------------------------------------------------------------

#include <stdio.h>

typedef long long int ll;
ll size;
ll n;

// Exibir o vetor organizado
void printaVetor(ll v[])
{
    for (ll i = 0; i < n; i++)
        printf("%lld ", v[i]);
    printf("\n");
}

// Trocar elementos com base no ponteiro
void swapElements(ll *a, ll *b)
{
    ll aux = *a;
    *a = *b;
    *b = aux;
}

// Executa a ordenação através do max heap
void heap(ll vec[], ll father)
{
    ll f1 = father * 2 + 1;
    if (f1 >= size) return;
    else if (father * 2 + 2 < size)
    {
        ll f2 = father * 2 + 2;
        if (vec[f1] > vec[f2])
        {
            if (vec[father] < vec[f1])
            {
                swapElements(&vec[father], &vec[f1]);
                heap(vec, f1);
            }
        }
        else
        { 
            if (vec[father] < vec[f2])
            {
                swapElements(&vec[father], &vec[f2]);
                heap(vec, f2);
            }
        }  
    }
    else
    {
        if (vec[father] < vec[f1])
        {
            swapElements(&vec[father], &vec[f1]);
            heap(vec, f1);
        }
    }
    return;
}

// Executa o max heap inicial
void max_heap(ll v[], ll father)
{
    ll f1 = father * 2 + 1;
    if (f1 >= size) return;
    if (father * 2 + 2 < size)
    {
        ll f2 = father * 2 + 2;
        if (v[f1] > v[f2])
        {
            if (v[father] < v[f1]){
                swapElements(&v[father], &v[f1]);
                max_heap(v, f1);
            }
        }   
        else
        {
            if (v[father] < v[f2]){
                swapElements(&v[father], &v[f2]);
                max_heap(v, f2);
            }
        }
    }
    else
    {
        if (v[father] < v[f1]){
            swapElements(&v[father], &v[f1]);
            max_heap(v, f1);
        }
    }
    return;
}

int main()
{
    scanf("%lld", &n);
    size = n;

    ll vector[n];
    for (ll i = 0; i < n; i++)
        scanf("%lld", &vector[i]);

    for (ll i = n/2 - 1; i >= 0 ; i--) max_heap(vector, i);
    
    while (size > 1) {
        swapElements(&vector[0], &vector[size - 1]);
        size--;
        heap(vector, 0);
    }

    printaVetor(vector);

    return 0;
}