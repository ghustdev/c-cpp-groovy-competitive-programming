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

const int maxN = 1e5 + 5;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int vect[maxN], prefix_gcd[maxN], sufix_gcd[maxN];
    
    for (int i=1; i<=n; ++i) cin >> vect[i];
    
    prefix_gcd[0] = 0;
    for (int i=1; i<=n; ++i) prefix_gcd[i] = gcd(prefix_gcd[i-1], vect[i]);

    sufix_gcd[n+1] = 0;
    for (int i=n; i>=1; --i) sufix_gcd[i] = gcd(sufix_gcd[i+1], vect[i]);

    int out = 0;
    for (int i=1; i<=n; ++i) {
        out = max(out, gcd(prefix_gcd[i-1], sufix_gcd[i+1]));
    }

    cout << out << "\n";

    return 0;
}