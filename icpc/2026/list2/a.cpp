#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long int ll;
const ll MAX = 10e5 + 10;

void solve()
{
    unordered_map <ll, ll> mp;
    vector<ll> nums(MAX);

    int n; cin >> n;
    
    ll count = 0;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        if (mp[x] == 0) nums[i] = x;
        mp[x]++;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        ll x = nums[i];
        if (mp[x] == 0) {
            continue;
        }

        if (mp[x] < x) count += mp[x];
        else count += mp[x] - x;
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