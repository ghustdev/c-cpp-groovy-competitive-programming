#include <stdio.h>

int main() 
{
    int year;
    
    scanf("%i", &year);
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Bissexto\n");
            } else {
                printf("Nao bissexto\n");
            }
        } else {
            printf("Bissexto\n");
        }
    } else {
        printf("Nao bissexto\n");
    }
    
    return 0;
}