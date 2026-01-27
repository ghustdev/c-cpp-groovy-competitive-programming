#include <stdio.h>

// --- Protótipos ---
void converteTempo(int second);


// --- Main ---
int main()
{
    int second;
    printf(""); scanf("%d", &second);

    converteTempo(second);

    return 0;
}

// --- Funções ---
void converteTempo(int second)
{
    int hours = second / 3600;
    int minutes = (second % 3600) / 60;
    int second_final = (second % 3600) % 60;

    printf("%d %d %d", hours, minutes, second_final);
}   