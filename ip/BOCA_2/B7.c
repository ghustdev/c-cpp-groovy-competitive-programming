#include <stdio.h>

int main() 
{
    int n1, n2, n3;

    scanf("%i %i %i", &n1, &n2, &n3);

    char vector[3] = {n1, n2, n3};
                    // 3   2   1  
    for (int i=0; i<3; i++) {
        int key = vector[i];
        int j = i - 1;
        while (j >= 0 && vector[j] > key) {
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = key;
    }

    printf("%i %i %i\n", vector[0], vector[1], vector[2]);
    
    return 0;
}