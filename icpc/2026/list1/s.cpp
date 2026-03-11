#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 2e5;

void solve()
{
    int n; cin >> n;

    int largest1 = 0;
    int largest2 = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x > largest1) {
            largest2 = largest1;
            largest1 = x;
        } 
        else if (x > largest2 && largest1 != x) {
            largest2 = x;
        }
    }

    cout << largest2;
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