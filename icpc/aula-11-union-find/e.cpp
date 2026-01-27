#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);

// --- STL ---
typedef long long ll;
using tup = tuple<ll, ll, ll>;
// typedef priority_queue<tup, vector<tup>, greater<tup>> pqll_greater; // Min heap (min in top)
// typedef priority_queue<ll, vector<ll>, greater<ll>> pqll_greater; // Min heap (min in top)
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
const int MAXN = 2 * 1e5 + 5;

ll n, m, h_tree = 1;
vector<ll> parent(MAXN);
vector<ll> ranking(MAXN, 1); 

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

// --- Code ---
ll find(ll x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

bool same(ll a, ll b) {
    return find(a) == find(b);
}

void unite(ll a, ll b) {
    a = find(a);
    b = find(b);
    if (ranking[a] < ranking[b]) swap(a,b);
    ranking[a] += ranking[b];
    parent[b] = a;

    if (ranking[a] > h_tree) h_tree = ranking[a];
}

void solve(){
    cin >> n >> m;

    for (int i = 0; i < n; i++) parent[i] = (ll) i;

    for (int i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        
        if (!same(a, b)) 
            unite(a, b);
    }

    cout << h_tree;
}

int main () 
{
    fast_io()
    
    int T = 1;
    // cin >> T;
    while(T--) solve();

    return 0;
}