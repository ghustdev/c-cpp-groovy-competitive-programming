#include <bits/stdc++.h>

using namespace std;

void orXor (vector <long int> entrada, long int sub_1, long int sub_2, set <long int> &resultados, long int res, unsigned long int pos);

int main() {

    int N;

    cin >> N;

    vector <long int> vetor(N);

    for (int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    sort (vetor.begin(), vetor.end());

    long int sub_1 = 0, sub_2 = 0;

    set <long int> resultados;

    long int res = 0;
    unsigned long int pos = 0;

    orXor (vetor, sub_1, sub_2, resultados, res, pos);

    cout << *resultados.begin() << "\n";

    return 0;
}

void orXor (vector <long int> entrada, long int sub_1, long int sub_2, set <long int> &resultados, long int res, unsigned long int pos){

    if (pos == entrada.size()){
        res = sub_1 ^ sub_2;
        resultados.insert(res);
        return;
    }

    long int atual = entrada[pos];

    orXor (entrada, (sub_1 | atual), sub_2, resultados, res, (pos + 1));

    orXor (entrada, sub_1, (sub_2 | atual), resultados, res, (pos + 1));
}
