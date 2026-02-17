#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pi;
// typedef vector<pair<int, int>> v_pi;
// typedef vector<pair<long, long>> v_pll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;
// --- Functions ---

// --- Code ---
const int MAX = 2*1e5 + 10;

int n;
vector<int> adj[MAX];
vector<bool> visited;

void dfs(int s) {    
    visited[s] = true;
    
    for (auto node : adj[s]) {
        if (n == node || s == node) {

        }
        if (visited[s]) continue;
        dfs(node);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m; cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    visited.assign(n+1, false);

    vector<int> c;
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;

        c.push_back(i);
        dfs(i);
    }

    cout << c.size() - 1 << "\n";

    for (int i=0; i<(int) c.size() - 1; i++) {
        cout << c[i] << " " << c[i+1] << "\n";
    }

    return 0;
}