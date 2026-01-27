#include <stdio.h>
#include <stdlib.h>

#define TESTS 2

typedef long long int lli;

typedef struct {
    lli ind;
    int val;
} mat_spr;

int main()
{ 
    int z = 0;
    while (z < TESTS) 
    {

        int q, i, j; scanf("%d", &q);
        int indV = 0, indOut = 0; 
        int outV[q]; 
        mat_spr V[q]; 
    
        for (i = 0; i < q; i++) {
            char operation; scanf(" %c", &operation);
    
            if (operation == 'A') {
                lli index;
                int x; scanf("%lld %d", &index, &x);
    
                int find_repeated = 0;
                for (j = 0; j < indV; j++) {
                    if (V[j].ind == index) {
                        V[j].ind = index;
                        V[j].val = x; 
                        find_repeated = 1;
                        break;
                    }
                }
    
                if (indV == 0 || find_repeated == 0) {
                    V[indV].ind = index;
                    V[indV++].val = x; 
                }
    
            } else {
                lli index; scanf("%lld", &index);
                int find = 0;
                for (j = 0; j < indV; j++) {
                    if (V[j].ind == index) {
                        outV[indOut++] = V[j].val;
                        find = 1;
                        break;
                    }
                }
                
                if (indV == 0 || find == 0) {
                    outV[indOut++] = 0; 
                }
            }
        }
    
        for (i = 0; i < indOut; i++)
            printf("%d\n", outV[i]);
    printf("\n");
    z++;
    }

    return 0;
}