#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main() 
{
    char placa[MAX];
    int len, type = 0;

    scanf("%s", &placa);

    len = strlen(placa);

    if (len == 8) {
        if (isupper(placa[0]) && 
            isupper(placa[1]) &&
            isupper(placa[2]) &&
            placa[3] == '-' &&
            isdigit(placa[4]) &&
            isdigit(placa[5]) &&
            isdigit(placa[6]) &&
            isdigit(placa[7])) 
                type = 1;
    } else if (len == 7) {
        if (isupper(placa[0]) && 
            isupper(placa[1]) &&
            isupper(placa[2]) &&
            isdigit(placa[3]) &&
            isupper(placa[4]) &&
            isdigit(placa[5]) &&
            isdigit(placa[6]))
                type = 2;
    } else {
        type = 0;
    }

    printf("%d", type);

    return 0;
}