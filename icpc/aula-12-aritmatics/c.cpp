#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> umll;
// typedef unordered_map<int, int> umii;
// typedef unordered_set<ll> usll;
// typedef priority_queue<ll> pqll;
// typedef priority_queue<int> pqi;
// typedef priority_queue<int, vector<int>, greater<int>> pqi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

const int INF = 1e9;
const ll LINF = (ll) 4e18;
const ll MOD = (ll) 1e9+7; 

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

ll modpow(ll a, ll b) {
    if (b == 0) return 1;
    if (a == 0) return 0;

    
    ll u = modpow(a, b/2);
    u = (u*u) % MOD;
    
    if (b % 2) {
        cout << " - " << u << " - " << b << "\n";
        u = (u*a) % MOD;
    }


    return u;
}   

void solve() {
    ll a, b; cin >> a >> b;

    cout << modpow(a, b);
}

int main () 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T = 1;
    cin >> T;
    while(T--) {
        solve(); 
        cout << "\n";
    }

    return 0;
}