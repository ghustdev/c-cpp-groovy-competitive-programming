#include <stdio.h>

int main()
{
    int n;
    int is_triangular = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((i-1)*i*(i+1) == n) {
            is_triangular = 1;
            break;
        }
    }

    is_triangular ? printf("%d eh triangular\n", n) : printf("%d nao eh triangular\n", n);
    
    return 0;
}