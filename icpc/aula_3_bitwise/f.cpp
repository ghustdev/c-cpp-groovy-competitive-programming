#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

ll count_bits(ll i) {
    int count_par = 0, count_impar = 0;
    int pos = 1;
    while(i) {
        if (i & 1) {    
            if (pos % 2 == 0)
                count_par++;
            else count_impar++;
        }
        i >>= 1; 
        pos++;
    }
    return abs(count_impar - count_par);

}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    
    for (int i=0; i<t; i++) {
        ll m, n, k, r = 0; cin >> m >> n >> k;
        for (ll j=m; j<=n; j++) {
            if (count_bits(j) == k) r++;
        }
        cout << r << "\n";
    }

    return 0;
}