#include <stdio.h>
#include <stdlib.h>


int *v;
int tam_logic = 0;
int n;
int count = 0;

void sub_particoes(int n, int max_control);

int main() 
{ 
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    sub_particoes(n, n);

    printf("%d", count);

    free(v);

    return 0;
}

void push_back(int value) {
    v[tam_logic] = value;
    tam_logic++;
}

void pop_back() {
    tam_logic--;
}

int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

void sub_particoes(int n, int max_control) {
    // printf("\n");
    // for (int j=0; j<tam_logic; j++) {
    //     printf("%d ", v[j]);
    // }
    if (n == 0) {
        count++;
        return;
    }
    // n = 4 -> 5 casos: 
    // 4 = 4
    // 3 + 1
    // 2 + 2 = 4
    // 2 + 1 + 1 = 4
    // 1 + 1 + 1 + 1 = 4
    for (int i=min(n, max_control); i>=1; i--) {
        push_back(i);
        sub_particoes(n-i, i);
        pop_back();
    }
}

//leroyzin was here :)