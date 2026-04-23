#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 2e5;

void solve()
{
    int n; cin >> n;

    vector<ll> v(n);
    ll moves = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i-1]) {
            moves += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }

    cout << moves;
}

int main()
{
    _;
    
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}