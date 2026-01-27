#include <stdio.h>

int main()
{
    double P_inicial, D, DeltaP, P_min;
    int Q_inicial, DeltaQ;
    double L;

    scanf("%lf %d %lf %lf %d %lf", &P_inicial, &Q_inicial, &D, &DeltaP, &DeltaQ, &P_min);

    int Q = Q_inicial;
    double P = P_inicial;
    double P_save = P_inicial;
    int Q_save = Q_inicial;

    double L_maximo = (P_inicial * Q_inicial) - D;

    printf("Preco   Ingressos Vendidos   Lucro\n");

    while (P >= P_min)
    {
        
        L = (P * Q) - D;

        if (P >= 10) {
            printf("%.2lf           %d          %.2lf\n", P, Q, L);

        } else {
            printf(" %.2lf           %d          %.2lf\n", P, Q, L);
        }

        if (L > L_maximo)
        {
            P_save = P;
            Q_save = Q;
        }
        
        L > L_maximo ? L_maximo = L : L_maximo;
        
        P -= DeltaP;
        Q += DeltaQ;
    }

    printf("Lucro maximo: %.2lf\n", L_maximo);
    printf("Na faixa de preco: %.2lf com %d ingressos.\n", P_save, Q_save);

    return 0;
}