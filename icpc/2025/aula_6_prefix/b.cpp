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

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q; cin >> n >> q;
    v_ll v(n);
    v_ll xor_prefix(n+1);

    xor_prefix[0] = 0;
    
    for (ll i=0; i<n; i++) {
        ll num; cin >> num;

        xor_prefix[i+1] = num ^ xor_prefix[i];
    }
    
    for (ll i=0; i<q; i++) {
        ll l, r; cin >> l >> r;

        ll xor_n = xor_prefix[r] ^ xor_prefix[l-1];
        
        cout << xor_n << "\n";
    }

    return 0;
}