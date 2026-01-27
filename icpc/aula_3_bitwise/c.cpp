#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

int count_bits(int x) {
    int count = 0;
    while(x) {
        x &= (x-1); count++;
    }
    return count;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;

    vi x(m+1);
    for (int i=0; i<=m; ++i) cin >> x[i];

    int fedor = x[m], num_amigos = 0;
    for (int i=0; i<m; ++i) {
        if (count_bits(x[i] ^ fedor) <= k) ++num_amigos;
    } 

    cout << num_amigos;

    return 0;
}