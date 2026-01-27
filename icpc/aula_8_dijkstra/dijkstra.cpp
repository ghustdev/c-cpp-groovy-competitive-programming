#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> v_pii;
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
const int MAXM = 2 * 1e5 + 10;

vector<vector<pii>> adj(MAXN);
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
        // adj[b].push_back({a, w});
    }

    // // Exemplo de como percorrer
    // for (int u = 1; u <= n; u++) {
    //     cout << "Vértice " << u << " tem arestas: ";
    //     for (auto [v, peso] : adj[u]) {
    //         cout << "(" << v << ", peso=" << peso << ") ";
    //     }
    //     cout << "\n";
    // }

    int ori = 1;
    // cin >> ori;

    vector<ll> dist(n + 1, INF);
    dist[ori] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, ori});

    vector<bool> visited(n + 1, false);

    while (!pq.empty())
    {
        auto [d, n] = pq.top();
        pq.pop();

        // Se já encontramos um caminho melhor, ignoramos este
        // if (d > dist[n]) continue;
        if (visited[n])
            continue;
        visited[n] = true;
        cout << n << endl;
        for (auto [v, p] : adj[n])
        {
            if (dist[n] + p < dist[v])
            {
                dist[v] = dist[n] + p;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";

    return 0;
}