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

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        string bw; cin >> bw;

        v_i v(n+1);
        int num_w = 0;
        
        v[0] = 0;

        for (int i=0; i<n; i++) {
            if (bw[i] == 'W')
                v[i+1] = v[i] + 1;
            else 
                v[i+1] = v[i];
        }

        int l = 1;
        int r = k;
        int min_w = k;

        while (r <= n) { 
            int num = v[r] - v[l-1];  
            if (num < min_w) {
                min_w = num;
            }
            r++;
            l++;
        }

        cout << min_w << "\n";
    }

    return 0;
}