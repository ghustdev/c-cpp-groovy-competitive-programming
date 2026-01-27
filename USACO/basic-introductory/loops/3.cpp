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
    pair<ll,ll> match = {1, 2};
    vector<ll> v(n);

    for (int i=0; i<n; i++) cin >> v[i];

    ll l = -1; 
    ll o = 3;
    for (int i=0; i<n; i++) {
        if (match.first == v[i])
            swap(match.second, o);
        else if (match.second == v[i])
            swap(match.first, o);
        else {
            cout << "NO";
            return;
        }
    }

    // for (int i=1; i<=n; i++) {
    //     ll winner = v[i];

    //     if (loser == -1) {
    //         if (winner == out) {
    //             cout << "NO";
    //             return;
    //         }
    //         loser = winner % 2 + 1;
    //         winner_prev = winner;
    //     } else if (winner == winner_prev) {
    //         int aux = loser;
    //         loser = out;
    //         out = aux;
    //     } else if (winner == out) {
    //         int aux = loser;
    //         loser = winner_prev;
    //         winner_prev = out;
    //         out = aux;
    //     } else {
    //         cout << "NO";
    //         return;
    //     }
    // }

    cout << "YES";
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