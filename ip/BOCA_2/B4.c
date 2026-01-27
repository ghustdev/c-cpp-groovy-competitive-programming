#include <stdio.h>

int main() 
{
    int age;  

    scanf("%d", &age);

    if (5 <= age && age <= 7) {
        printf("Infantil A\n");
    } else if (8 <= age && age <= 10) {
        printf("Infantil B\n");     
    } else if (11 <= age && age <= 13) {
        printf("Juvenil A\n");
    } else if (14 <= age && age <= 17) {
        printf("Juvenil B\n");
    } else if (age >= 18) {
        printf("Adulto\n");
    } else {
        printf("Idade invalida\n");
    }
    
    return 0;
}