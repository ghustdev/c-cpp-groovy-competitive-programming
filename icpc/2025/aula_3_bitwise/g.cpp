#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

// percebi que há um padão para o xor
ll xor_cumulativo(ll x) {
    if (x % 4 == 0) return x;
    if (x % 4 == 1) return 1;
    if (x % 4 == 2) return x + 1;
    return 0;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b; cin >> a >> b;

    ll r = xor_cumulativo(b) ^ xor_cumulativo(a-1);

    cout << r;

    return 0;
}