#include <stdio.h>

int main()
{
    int b, e;
    int pot = 1;

    scanf("%d %d", &b, &e);

    for (int i = 0; i < e; i++)
    {
        pot *= b;
    }

    printf("\n%d", pot);
    
    return 0;
}