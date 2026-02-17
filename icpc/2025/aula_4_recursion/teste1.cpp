#include <bits/stdc++.h>
using namespace std;

#define LONG_LONG_MAX 2e30;

void orXor (vector <long long int> entrada, long long int sub_1, long long int sub_2, long long int resultados, unsigned long long int pos);

int main() {

    int N;

    cin >> N;

    vector <long long int> vetor(N);

    for (int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    long long resultado = LONG_LONG_MAX;

    orXor (vetor, vetor[0], 0, resultado, 1);

    cout << resultado << "\n";

    return 0;
}

void orXor (vector <long long int> entrada, long long int sub_1, long long int sub_2, long long intresultado, unsigned long long int pos){

    if (pos == entrada.size()){
        long long int res = sub_1 ^ sub_2;
        intresultado = min(res,intresultado);
        return;
    }

    orXor (entrada, (sub_1 | entrada[pos]), sub_2, intresultado, (pos + 1));

    orXor (entrada, entrada[pos], (sub_2 ^  sub_1), intresultado, (pos + 1));
}