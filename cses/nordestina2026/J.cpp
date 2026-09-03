// The Brega Game

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;


void solve() {
    ll n, q; cin >> n >> q;

    vector<ll> v(n+1);

    for (int i=1; i<n+1; i++) {
        cin >> v[i];
    } 

    ll L = 1, R = n+1;
    for (int i=0; i<q; i++) {
        cin >> L >> R;

        ll MAXadilson = 0;
        ll MAXreginaldo = 0;
        ll selected = 0;

        for (int j=1; j<n+1; j++) {
            if (v[L] > v[R]) {
                selected = v[L];
                cout << "selected: " << selected << "\n";
                L++;
            }
            else {
                selected = v[R];
                cout << "selected: " << selected << "\n";
                R--;
            }
    
            if (j%2!=0) {
                selected > MAXadilson ? MAXadilson = selected : 0;
            }
            else {
                selected > MAXreginaldo ? MAXreginaldo = selected : 0;
            }

            if (L > R) break;
        }

        cout << "Adilson: " << MAXadilson << " | " << "Reginaldo: " << MAXreginaldo << "\n";
        
        MAXreginaldo > MAXadilson ? cout << "Reginaldo\n" : cout << "Adilson\n";
    }



}


int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
        cout << "\n";
    }

    return 0;
}