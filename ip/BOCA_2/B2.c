#include <stdio.h>

int main() 
{
    int number;
    
    scanf("%i", &number);

    if (number % 2 == 0) {
        printf("%i Par\n", number);
    } 
    else {
        printf("%i Impar\n", number);
    }
    return 0;
}