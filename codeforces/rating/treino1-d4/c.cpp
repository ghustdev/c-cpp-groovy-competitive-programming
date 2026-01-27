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
        int n; cin >> n;
        vector<ll> v(n);

        int odd = 0;
        int even = 0;
        for (int i=0; i<n; i++) {
            ll a; cin >> a;
            v[i] = a;

            if (a % 2 == 0)
                even++;
            else 
                odd++;
        }
        
        if ((even != n && even > 0) || odd != n && odd > 0) {
            sort(v.begin(), v.end());
            for (int i=0; i<n; i++) cout << v[i] << " ";
        } else {
            for (int i=0; i<n; i++) cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}