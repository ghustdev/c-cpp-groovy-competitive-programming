#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
// typedef vector<pair<int, int>> v_pii;
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
const ll INF = 1e16;
const int MAXN = 1e5 + 10;
const int MAXM = 1e5 + 10;

vector<vector<pll>> adj(MAXN);
int n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;

        // Não direcionado
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    int ori = 1;

    vector<ll> dist(n + 1, INF);
    dist[ori] = 0;

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({0, ori});

    vector<bool> visited(n + 1, false);

    vector<int> parents(n+1, -1);
    bool track = false;

    while (!pq.empty())
    {
        auto node = pq.top().second; 
        pq.pop();

        if (visited[node]) continue;
        visited[node] = true;

        if (node == n) track = true;

        for (auto [v, p] : adj[node])
        {
            if (dist[node] + p < dist[v])
            {
                parents[v] = node;
                dist[v] = dist[node] + p;
                pq.push({dist[v], v});
            }
        }
    }

    vector<int> out;
    int p = n;
    while(parents[p] != -1) {
        out.push_back(p);
        p = parents[p];
    }
    out.push_back(ori);

    reverse(out.begin(), out.end());

    if (track) {
        for (int o : out) cout << o << " ";
    } else
        cout << -1;

    return 0;
}