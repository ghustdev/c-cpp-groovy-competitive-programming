#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pi;
// typedef vector<pair<int, int>> v_pi;
// typedef vector<pair<long, long>> v_pll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;
// --- Functions ---

// --- Code ---
const ll MAXA = 1e9 + 10;
const int MAXN = 2 * 1e5 + 10;
const ll MIND = -1e9 - 10;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q; 

    while (q--) {
        int n; cin >> n;
        vector<ll> v(n);

        for (int i=0; i<n; i++) cin >> v[i];
        
        sort(v.begin(), v.end());

        ll max_diference = MIND;
        for (int i=0; i<n/2; i++)
            max_diference = max(max_diference, abs(v[2*i+1] - v[2*i]));

        cout << max_diference << "\n";
    }

    return 0;
}