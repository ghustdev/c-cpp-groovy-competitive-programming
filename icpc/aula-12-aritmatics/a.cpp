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
const ll LINF = (ll)4e18;
const ll MOD = (ll)1e8+7; 

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void product(ll f[2][2], ll b[2][2]) {
    ll a1 = f[0][0] % MOD;
    ll b1 = f[0][1] % MOD;
    ll c1 = f[1][0] % MOD;
    ll d1 = f[1][1] % MOD;
    ll a2 = b[0][0] % MOD;
    ll b2 = b[0][1] % MOD;
    ll c2 = b[1][0] % MOD;
    ll d2 = b[1][1] % MOD;
    
    ll w = ((a1 * a1) % MOD + (b1 * c2) % MOD) % MOD;
    ll x = ((a1 * b2) % MOD + (b1 * d2) % MOD) % MOD;
    ll y = ((c1 * a2) % MOD + (d1 * c2) % MOD) % MOD;
    ll z = ((c1 * b2) % MOD + (d1 * d2) % MOD) % MOD;

    f[0][0] = w;
    f[0][1] = x;
    f[1][0] = y;
    f[1][1] = z;
}

void power(ll f[2][2], ll n) {
    if (n < 2) return;

    ll b[2][2] = {{1,1},{1,0}};

    power(f, n/2);
    product(f, f);

    if (n & 1) product(f, b);
}

void solve() {
    ll n; cin >> n;
    ll f[2][2] = {{1,1},{1,0}};

    power(f, n-1);
    cout << f[0][0];
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