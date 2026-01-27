#include <bits/stdc++.h>
using namespace std;

inline void ghustFast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

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

// --- Vars ---
const int INF = 1e9;
const ll LINF = (ll)4e18;

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

ll gcd(ll a , ll b) {
	if ( a == 0 )
		return b;
	return gcd(b % a , a);
}

ll lcm(ll a , ll b) { return ( a / gcd(a , b)) * b; }

// --- Code ---
void solve() {
    ll n; cin >> n;
    
    ll cont = 1;
    for (int i=2; i<=n/2; i++) {
        if ((n-i) % i == 0) cont++;
    }

    cout << cont;
}

int main () 
{
    ghustFast();
    
    int T = 1;
    // cin >> T;
    while(T--) {
        solve(); 
        cout << "\n";
    }

    return 0;
}