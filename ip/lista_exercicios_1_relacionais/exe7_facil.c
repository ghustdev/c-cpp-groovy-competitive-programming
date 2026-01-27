#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int n1, n2;
    float random;

    scanf("%i", &n1);
    scanf("%i", &n2);

    random = (rand() % (n1-n2+1)) + n1;

    printf("%f", random);

    return 0;
}