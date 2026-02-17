#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<ll> v_ll;
typedef map<ll, ll> map_ll;
// typedef set<ll> set_ll;
// typedef unordered_map<ll, ll> u_map_ll;
// typedef vector<ll> v_ll;
// typedef unordered_set<ll> u_set_ll;
// typedef queue<ll> q_ll;
// typedef vector<pair<int, int>> v_pair_i;
typedef vector<pair<long, long>> v_pair_ll;
typedef pair<long, long> pair_ll;
// typedef unordered_map<int, int> u_map_ii;
// typedef unordered_map<string, bool> u_map_str;
// typedef unordered_map<char, ll> u_map_c;
// typedef set<ll, greater<ll>> set__ll_greater;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    v_ll v(n);
    map<ll, vector<ll>> pos_ori;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        pos_ori[v[i]].push_back(i);
    }
    
    sort(v.begin(), v.end());
    
    bool is = false;
    ll l, r; 
    v_i pos(3);
    for (ll i = 0; i < n - 2 && !is; i++) {
        l = i + 1;
        r = n-1;

        while (l < r) {
            ll sum = v[i] + v[l] + v[r];
            if (sum == x) {
                is = true;
                pos[0] = pos_ori[v[i]].back()+1; pos_ori[v[i]].pop_back();
                pos[1] = pos_ori[v[l]].back()+1; pos_ori[v[l]].pop_back();
                pos[2] = pos_ori[v[r]].back()+1; pos_ori[v[r]].pop_back();
                break;
            }
            else if (sum > x) r--;
            else l++;
        }
    }

    sort(pos.begin(), pos.end());
    
    if (!is)
        cout << "IMPOSSIBLE";
    else 
        cout << pos[0] << " " << pos[1] << " " << pos[2]; 

    return 0;
}