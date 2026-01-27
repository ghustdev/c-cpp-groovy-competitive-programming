#include <stdio.h>

int main()
{
    int n;
    int is_perfect_square;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        for (int i = 1; i <= n; i++)
        {
            is_perfect_square = 0;

            if (i*i == n) {
                is_perfect_square = 1;
                break;
            }
        }   
        is_perfect_square ? printf("%d eh quadrado perfeito\n", n) : printf("%d nao eh quadrado perfeito\n", n);
    }
    
    return 0;
}   