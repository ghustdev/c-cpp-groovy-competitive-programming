// Lampions League

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
    int n; cin >> n;

    int absolute;

    if (n%2==0) absolute = n/2;
    else absolute = (n+1)/2;

    absolute % 2 == 0 ? cout << "PAR" : cout << "IMPAR";
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