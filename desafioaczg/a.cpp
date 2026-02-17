#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long sumOdd = 0;
    for (long long i = 0; i <= 385000; i++) {
        if (i % 2 != 0) {
            sumOdd += i*i;
        }
    }

    cout << sumOdd;
}