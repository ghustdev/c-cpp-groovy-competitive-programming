#include <stdio.h>

int main()
{
    int x, y, z, r;

    scanf("%d %d %d", &x, &y, &z);

    r = (x*x*x) + (y*y) + (x*y*z);

    printf("%i", r);
    return 0;
}