#include <stdio.h>
#include <stdlib.h>

void back_queen(int y);

int *cols, *dig1, *dig2;
int count_q;
int n;

int main() 
{
    scanf("%d", &n);
    
    cols = (int*) calloc(n, sizeof(int));
    dig2 = (int*) calloc((n*2-1), sizeof(int));
    dig1 = (int*) calloc((n*2-1), sizeof(int));
    
    count_q = 0;
    back_queen(0);

    printf("%d", count_q);

    free(cols);
    free(dig1);
    free(dig2);

    return 0;
}

void back_queen(int y) {
    if (y==n) {
        count_q++;
        return;
    }
    for (int x=0; x<n; x++) {
        if (cols[x] || dig1[x+y] || dig2[x-y+n-1]) continue;
        cols[x] = dig1[x+y] = dig2[x-y+n-1] = 1;
        back_queen(y+1);
        cols[x] = dig1[x+y] = dig2[x-y+n-1] = 0;
    }
}