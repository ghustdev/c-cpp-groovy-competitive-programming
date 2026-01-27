#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, n; cin >> a >> n;

    int r = a / n;
    int resto = a % n;
    int x = 2*r / (n + 2);

    cout << x*n + resto;

    return 0;
}