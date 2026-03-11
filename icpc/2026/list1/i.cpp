#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 2e5;

void solve()
{
    ll n; cin >> n;

    cout << n; 

    while (n != 1) {
        if (n % 2 == 0) {
            n = n/2;
            cout << " " << n;
        } else {
            n = n * 3 + 1;
            cout << " " << n;
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
        cout << endl;
    }

    return 0;
}