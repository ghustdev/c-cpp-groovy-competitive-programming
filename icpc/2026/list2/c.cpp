#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long int ll;
const ll MAX = 10e5 + 10;

void solve()
{
    vector<ll> v;

    ll n; cin >> n;

    for (int i = 0; i < n; i++) {
        ll op; cin >> op;

        if (op == 0) {
            ll x; cin >> x;
            v.push_back(x);
        } 
        else if (op == 1) {
            ll i; cin >> i;
            cout << v.at(i) << endl;
        }
        else if (op == 2) {
            v.pop_back();
        }
    }
}

int main()
{
    _;
    
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
        // cout << endl;
    }

    return 0;
}