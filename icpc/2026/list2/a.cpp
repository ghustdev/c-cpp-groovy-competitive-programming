#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 10e5 + 10;

void solve()
{
    unordered_map <ll, ll> mp[MAX];
    int n; cin >> n;
    

    ll count = 0;

    for (int i = 0; i < MAX; i++) {
        ll x; cin >> x;
        mp[x] += 1;
    }

    for (int i=1; i<=n; i++) {
        ll x; cin >> x;

        if (mp[x] <= x) mp[x] += 1;
        else count++;
    }

    cout << count;
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