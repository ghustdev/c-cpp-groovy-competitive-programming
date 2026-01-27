#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x = 3;

    cout << (x << 1);

    cout << "\n";
    for (int i = 31; i >= 0; i--) {
        if (x&(1<<i)) cout << "1";
        else cout << "0";
    }

    cout << "\n" << (7 | (7-1));

    cout << "\n" << __builtin_clz(1) ;// -> zeros no inicio;
    cout << "\n" << __builtin_ctz(6); // -> zeros no final;
    cout << "\n" << __builtin_popcount(6); // -> numero de 1s;
    cout << "\n" << __builtin_parity(6); // -> paridade da quantidade de 1s;
    cout << "\n" << __builtin_ffs(6); // -> 1 + índice do bit menos significativo

    return 0;
}