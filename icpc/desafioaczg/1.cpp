#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long sumOdd = 0;
    for (long long i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sumOdd += i;
        }
    }

    cout << sumOdd;
}