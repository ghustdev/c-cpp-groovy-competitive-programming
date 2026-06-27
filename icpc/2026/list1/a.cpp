#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 2e5;

void solve()
{
    float x; cin >> x;

    if (x >= 38) cout << "1";
    else if (x >= 37.5 && x < 38) cout << "2";
    else if (x < 37.5) cout << "3";
}

int main()
{
    _;
    
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}