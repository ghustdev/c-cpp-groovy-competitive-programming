#include <stdio.h>

int main() 
{
    int X, Y, Z;
    
    scanf("%i %i %i", &X, &Y, &Z);

    if ((X + Y <= Z || X + Z <= Y || Y + Z <= X) || (X <= 0 || Y <= 0 || Z <= 0)) {
        printf("Nao forma triangulo\n");
    } else {
        if (X == Y && X == Z && Y == Z) {
            printf("Equilatero\n");
        } else if ((X != Y && X == Z || X != Y && Y == Z) || (X != Z && X == Y || X != Z && Z == Y) || (Y != Z && Y == X || Y != Z && Z == X)) {
            printf("Isosceles\n");
        } else if (X != Y && X != Z && Y != Z) {
            printf("Escaleno\n");
        }
    }
    return 0;
}