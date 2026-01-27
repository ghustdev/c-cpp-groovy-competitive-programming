#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;

    printf("PRONTO 1:\n");
    printf("x1:"); scanf("%i", &x1);
    printf("y1:"); scanf("%i", &y1);
    system("cls");
    printf("PRONTO 2:\n");
    printf("x2:"); scanf("%i", &x2);
    printf("y2:"); scanf("%i", &y2);

    float dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("%f", dist);

    return 0;
}