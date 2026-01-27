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
const int MAXN = 1e5 + 10;

int n;
vector<int> adj[MAXN];
vector<int> path(MAXN, -1);
vector<bool> visited(MAXN, false);
int f_cicle, s_cicle;

bool dfs(int s, int p) {  
    visited[s] = true;
    for (int node : adj[s]) {
        if (node == p) continue;
        if (visited[node]) {
            f_cicle = s;
            s_cicle = node;
            return 1;
        }
        path[node] = s;
        if (dfs(node, s)) return 1;
    }
    return 0;
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

    bool have_cicle = false;
    for (int i=1; i<=n; i++) {
        if (visited[i]) continue;
        if (dfs(i, 0)) {
            have_cicle = true;
            break;  
        }
    }

    if (!have_cicle) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    
    vector<int> out;
    out.push_back(s_cicle);
    for (int p = f_cicle; p != s_cicle; p = path[p]) 
        out.push_back(p);
    out.push_back(s_cicle);

    cout << out.size() << "\n";
    for (int p : out)
        cout << p << " ";

    return 0;
}