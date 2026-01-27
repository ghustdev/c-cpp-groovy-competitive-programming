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
        ll n, k; cin >> n >> k;
        v_ll vect(n), prefix_sum(n+1, 0);
        
        ll sum = 0;
        for (int i=0; i<n; i++)
            cin >> vect[i];
            
        sort(vect.begin(), vect.end());

        for (int i=0; i<n; i++) {
            sum += vect[i];

            prefix_sum[i+1] = sum;
        } 

        int it = k + 1;
        ll smaller = LLONG_MAX; 
        int r = n;
        while (it--) {
            ll result = prefix_sum[it*2] + prefix_sum[n] - prefix_sum[r];
            if (result < smaller)
                smaller = result;
            r--;
        }

        cout << sum - smaller << "\n";
    }

    return 0;
}