#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;
    
    for (int i=0; i<q; i++) {
        ll a, b, n; cin >> a >> b >> n;
        if (n%3 == 0) cout << a << "\n";
        else if (n%3 == 1) cout << b << "\n";
        else cout << (a ^ b) << "\n";
    }

    return 0;
}