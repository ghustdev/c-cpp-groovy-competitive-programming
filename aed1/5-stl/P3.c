#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char v;
    struct node *next;
} node;

struct stack
{
    node *end;
};

void init(struct stack *f)
{
    f->end = NULL;
}

void push(struct stack *f, int x)
{
    node *new = (node *)malloc(sizeof(node));
    new->v = x;

    if (f->end == NULL)
    {
        new->next = NULL;
        f->end = new;
    }
    else
    {
        new->next = f->end;
        f->end = new;
    }
}

char pop(struct stack *f)
{
    if (f->end == NULL)
        return -1;

    node *aux = f->end;
    f->end = f->end->next;

    char v = aux->v;
    free(aux);

    return v;
}

char top(struct stack *f)
{
    if (f->end == NULL)
        return ' ';

    return f->end->v;
}

int size(struct stack *f)
{
    int size_list = 0;

    node *current = f->end;
    while (current != NULL)
    {
        current = current->next;
        size_list++;
    }

    return size_list;
}

void clear(struct stack *f)
{
    node *current = f->end;

    while (current != NULL)
    {
        node *aux = current;
        current = current->next;

        free(aux);
    }

    f->end = NULL;
}

void print(struct stack *f)
{
    if (f->end == NULL)
    {
        return;
    }

    node *current = f->end;
    printf("%c", current->v);

    while (current->next != NULL)
    {
        current = current->next;
        printf("%c", current->v);
    }
}

void printE(struct stack *f)
{
    if (f->end == NULL)
    {
        return;
    }

    node *current = f->end;
    printf("%c ", current->v);

    while (current->next != NULL)
    {
        current = current->next;
        printf("%c ", current->v);
    }
}

int main()
{
    int i = 0;
    char c = ' ';
    struct stack original;
    init(&original);

    struct stack final;
    init(&final);

    struct stack operandos;
    init(&operandos);

    int tamanho = 0;
    int p = 0;
    
    while (scanf("%c", &c) != EOF)
    {
        push(&original, c);

        if (c == '(')
        {
            p++;
            push(&operandos, c);
            tamanho++;
        }
        else if (c == ')')
        {
            p--;
            while (top(&operandos) != '(' && tamanho > 1)
            {
                push(&final, pop(&operandos));
                tamanho--;
            }
            if (top(&operandos) == '(')
            {
                pop(&operandos);
                tamanho--;
            }
        }
        else if (c == '^')
        {
            push(&operandos, c);
            tamanho++;
        }
        else if (c == '*' || c == '/')
        {
            if (tamanho != 0)
            {
                char anterior = top(&operandos);
                while (anterior == '/' || anterior == '*' || anterior == '^')
                {
                    push(&final, pop(&operandos));
                    anterior = top(&operandos);
                    tamanho--;
                }
            }
            push(&operandos, c);
            tamanho++;
        }
        else if (c == '+' || c == '-')
        {
            if (tamanho > 0)
            {
                char anterior = top(&operandos);
                while (anterior == '+' || anterior == '-' || anterior == '/' || anterior == '*' || anterior == '^')
                {
                    push(&final, pop(&operandos));
                    anterior = top(&operandos);
                    tamanho--;
                }
            }
            push(&operandos, c);
            tamanho++;
        }
        else if (c == '\n')
        {
            for (int o = 0; o < tamanho; o++)
                push(&final, pop(&operandos));

            i++;

            struct stack tmp;
            init(&tmp);
            int tam = size(&original);
            for (int j = 0; j < tam; j++)
                push(&tmp, pop(&original));

            print(&tmp);

            if (p != 0)
            {
                printf("Expressao invalida\n");
            }
            else
            {
                struct stack tmpfinal;
                init(&tmpfinal);
                int tamfinal = size(&final);
                for (int j = 0; j < tamfinal; j++)
                    push(&tmpfinal, pop(&final));
                printE(&tmpfinal);
                printf("\n");
            }
            printf("\n");

            clear(&original);
            clear(&operandos);
            clear(&final);

            tamanho = 0;
            p = 0;
        }
        else
        {
            push(&final, c);
        }
        // expressão
    }
    return 0;
}