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

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x; cin >> n >> x;

        v_ll a(n);
        ll mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        ll l_height = 1, h_height = mx + x, best_height = 1;

        while (l_height <= h_height) {
            ll mid = (l_height + h_height) / 2;

            ll water = 0;
            for (ll h : a) {
                if (h < mid) water += mid - h;
                if (water > x) break;
            }

            if (water <= x) {
                best_height = mid;  
                l_height = mid + 1;
            } else {
                h_height = mid - 1;
            }
        }

        cout << best_height << "\n";
    }
    return 0;

    return 0;
}