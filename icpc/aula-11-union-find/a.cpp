#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr);

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
const int MAXN = 2 * 1e5 + 5;

int n, q;
vector<int> parent(MAXN);
vector<int> ranking(MAXN); 

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

// --- Code ---
int find(int x) {
    while (x != parent[x]) x = parent[x];
    return x;
}

bool same(int a, int b) {
    return find(a) == find(b);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (ranking[a] < ranking[b]) swap(a,b);
    ranking[a] += ranking[b];
    parent[b] = a;
}

void solve(){
    cin >> n >> q;

    parent.resize(n);
    ranking.resize(n, 1);

    for (int i = 0; i < n; i++) parent[i] = i;
    
    for (int i = 1; i <= q; i++) {
        int op, a, b; cin >> op >> a >> b;

        if (op) {
            if (same(a, b)) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            unite(a, b);
        }
    }
}

int main () 
{
    fast_io()
    
    int T = 1;
    // cin >> T;
    while(T--) solve();

    return 0;
}