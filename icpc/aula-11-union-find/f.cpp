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

ll n, m;
vector<ll> parent(MAXN);
//           max/min
vector<pair<ll, ll>> references(MAXN); 
vector<ll> ranking(MAXN, 1); 

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

// --- Code ---
ll father(ll x, ll a, ll b) {
    if (parent[x] == x) return x;

    return parent[x] = find(parent[x]);

    if (references[a].first > references[b].first) {
        references[b].first = references[a].first;
    } else {
        references[a].first = references[b].first;
    }

    if (references[a].second < references[b].second) {
        references[b].second = references[a].second;
    } else {
        references[a].second = references[b].second;
    }

}
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

    father(b, a, b);
}

void solve(){
    cin >> n >> m;

    for (int i = 1; i <= n; i++) parent[i] = (ll) i;
    for (int i = 1; i <= n; i++) references[i] = {(ll) i, (ll) i};

    for (int i = 0; i < m; i++) {
        string operation; cin >> operation;

        cout << "\n" << operation << "\n";

        if (operation == "union") {
            ll a, b; cin >> a >> b;
            if (!same(a, b)) 
                unite(a, b);
        }
        else {  
            ll in; cin >> in;
            cout << references[in].second << " " << references[in].first << " " << ranking[references[in].second] << "\n";
        }
        
    }
}

int main () 
{
    fast_io()
    
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
        cout << "\n";
    }

    return 0;
}