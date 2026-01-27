#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

// --- Vars ---
const ll INF = 1e18;
const int MAXN = 1e3 + 10;

// --- Functions ---
vector<vector<ll>> adj;
int n, m;

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    cin >> n >> m;

    adj.assign(n+1, vector<ll>(n+1, 0));

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a][b] = w;
        adj[b][a] = w;
    }

    ll origin = 1;
    vector<ll> dist(n + 1, INF);
    vector<bool> visited(n + 1, false);

    for (int step = 1; step <= n; step++)
    {
        // escolher menor nó para cada volta, semelhante ao pq do Dijkstra normal
        int u = -1;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i] && (u == -1 || dist[i] < dist[u]))
                u = i;
        }

        visited[u] = true;

        for (int v = 1; v <= n; v++)
        {
            if (adj[u][v] != 0)
            {
                ll w = adj[u][v];
                if (dist[u] + w < dist[v])
                    dist[v] = dist[u] + w;
            }
        }
    }

    return 0;
}