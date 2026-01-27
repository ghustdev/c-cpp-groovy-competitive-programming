#include <bits/stdc++.h>
using namespace std;

// --- STL ---
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

// --- Vars ---


// --- Functions ---


// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    
    int t; cin >> t;

    while (t--) {
        ll y, x; cin >> y >> x;

        ll m = max(y, x);

        ll diag_max = m*m - m + 1;

        if (m % 2 == 0) {
            m == y ? cout << diag_max + (y - x) << "\n" : cout << diag_max - (x - y) << "\n";
        } else {
            m == x ? cout << diag_max + (x - y) << "\n" : cout << diag_max - (y - x) << "\n";
        }
    }

    return 0;
}