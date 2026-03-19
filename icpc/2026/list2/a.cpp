#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long int ll;
const ll MAX = 10e5 + 10;

void solve()
{
    unordered_map <ll, ll> mp;
    array
    int n; cin >> n;
    
    ll count = 0;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        mp[x] += 1;
    }

    for (int i=1; i<=MAX; i++) {
        if (mp[i] == 0) {
            continue;
        }
        cout << mp[i] << " ";
        if (mp[i] < i) count += mp[i];
        else count += mp[i] - i;
    }

    cout <<  endl << count;
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