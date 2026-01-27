#include <stdio.h>

float max(float *vet, int N);
float min(float *vet, int N);

int main()
{
    int N;
    float Xnorm, Xmax, Xmin;
    scanf("%d", &N);

    float vet[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%f", &vet[i]);
    }

    Xmax = max(vet, N);
    Xmin = min(vet, N);

    for (int i = 0; i < N; i++)
    {
        if (Xmax == Xmin)
        {
            Xnorm = 0.0;
        }
        else
        {
            Xnorm = (vet[i] - Xmin) / (Xmax - Xmin);
        }
        printf("%.2f ", Xnorm);
    }

    return 0;
}

float max(float *vet, int N)
{
    float Xmax = vet[0];

    for (int i = 0; i < N; i++)
    {
        if (vet[i] > Xmax)
        {
            Xmax = vet[i];
        }
    }
    return Xmax;
}

float min(float *vet, int N)
{
    float Xmin = vet[0];

    for (int i = 0; i < N; i++)
    {
        if (vet[i] < Xmin)
        {
            Xmin = vet[i];
        }
    }
    return Xmin;
}