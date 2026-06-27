#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

void solve() {
    ll n; cin >> n;

    cout << n << " ";
    while (n > 1) {
        if (n%2==0) {
            n = n/2;
            cout << n << " ";
        }
        else {
            n = 3*n+1;
            cout << n << " ";
        }
    }
}

int main() {
    _;

    int T = 1;
    // cin >> T;

    while(T--) {
        solve();
        cout << endl;
    }

    return 0;
}