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

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q; 

    while (q--) {
        int n; cin >> n;

        int count_zero = 0;
        int count_negative = 0;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
            if (v[i] == -1) count_negative++;
            if (v[i] == 0) count_zero++;
        }

        int out = count_zero;
        if (count_negative % 2 != 0)
            out += 2;

        cout << out << "\n";
    }

    return 0;
}
