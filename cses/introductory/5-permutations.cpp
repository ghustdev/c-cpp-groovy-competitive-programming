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

    int n; cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }
    
    if (n < 4) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i=2; i<=n; i = i + 2) cout << i << " ";
    
    for (int i=1; i<=n; i = i+2) cout << i << " ";

    return 0;
}