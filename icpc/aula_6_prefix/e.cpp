#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<ll> v_ll;
// typedef map<ll, ll> map_ll;
// typedef set<ll> set_ll;
// typedef unordered_map<ll, ll> u_map_ll;
// typedef vector<ll> v_ll;
// typedef unordered_set<ll> u_set_ll;
// typedef queue<ll> q_ll;
// typedef vector<pair<int, int>> v_pair_i;
// typedef vector<pair<long, long>> v_pair_ll;
// typedef unordered_map<int, int> u_map_ii;
// typedef unordered_map<string, bool> u_map_str;
// typedef unordered_map<char, ll> u_map_c;
// typedef set<ll, greater<ll>> set__ll_greater;

// int my_binary_search(ll steps, ll e) {

// }

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        ll n, q; cin >> n >> q;
        v_ll steps(n), prefix_sum_steps(n+1, 0), max_step(n+1, 0);
        
        for (int i=0; i<n; i++) {
            cin >> steps[i];
            
            prefix_sum_steps[i+1] = steps[i] + prefix_sum_steps[i];
            max_step[i+1] = max(max_step[i], steps[i]);
        }
        
        for (int i=0; i<q; i++) {
            ll quest; cin >> quest;

            int pos = upper_bound(max_step.begin(), max_step.end(), quest) - max_step.begin() - 1;

            cout << prefix_sum_steps[pos] << " ";
        }
        cout << "\n";
        // opa

    }

    return 0;
}