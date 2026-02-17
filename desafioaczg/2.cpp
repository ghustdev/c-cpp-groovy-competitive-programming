#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long sum = 0;
    long long a = 1, b = 1;
    while (b <= 4000000) {

        if (b % 2 == 0)
            sum += b;
        long long aux = a;
        a = b;
        b = aux + b;
    }

    cout << sum;
}