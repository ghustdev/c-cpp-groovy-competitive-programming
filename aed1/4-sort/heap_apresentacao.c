// A Complexidade de Tempo do Heap Sort sempre é O(n log n), tanto no pior, médio e melhor caso;
// A Complexidade Espacial é O(1), ou seja, uma quantidade de memória constante.
// O Heapsort é eficiente em termos de espaço porque realiza as operações de ordenação dentro do próprio array, sem a necessidade de alocar memória adicional para estruturas de dados auxiliares.
// -----------------------------------------------------------------------------------

#include <stdio.h>

int size;
int n;

// Trocar elementos com base no ponteiro
void swap_elements(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Executa o max heap (não completo); deve ser void, pois não precisa retornar
int heap_sort(int v[], int father)
{
    if (father == -1)
    {
        swap_elements(&v[0], &v[size - 1]);
        size--;
        printf("\nElementos trocados: %d - %d; Tamanho lógico: %d\n", v[0], v[size], size);
        for (int i = 0; i < size; i++)
            printf("%d ", v[i]);
        return v[size];
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

    return heap_sort(v, father - 1);
}

int main()
{
    scanf("%d", &n);
    size = n;

    // int v[] = {17, 3, 2, 1, 100, 7, 19, 36, 25}; // 9 elementos
    int v[] = {1, 5, 2, 3}; // 4 elementos
    int element;

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    while (size >= 1)
    {
        element = heap_sort(v, size/2 - 1);
        printf("\nElemento retirado: %d\n", element);
    }

    printf("\nVetor ordenado: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    return 0;
}
