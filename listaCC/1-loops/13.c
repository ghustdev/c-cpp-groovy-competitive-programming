#include <stdio.h>

int main ()
{
    int qp = 0, qi = 0, impar = 0, par = 0;
    int in; 

    do {
        scanf("%d", &in);
        if (in == 0) break;

        if (in % 2 == 0) {
            par += in;
            qp++;
        } else {
            impar += in;
            qi++;
        }
    } while (1);

    if (qp > 0) {
        printf("MEDIA PAR: %.6f\n", (par / (float) qp));
    } else {
        printf("MEDIA PAR: mp\n");
    }
    
    if (qi > 0) {
        printf("MEDIA IMPAR: %.6f", (impar / (float) qi));
    } else {
        printf("MEDIA IMPAR: mi");
    }

    return 0;
}