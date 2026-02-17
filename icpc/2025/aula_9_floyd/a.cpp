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

// --- Functions ---


// --- Code ---
const ll INF = 1e16;

vector<vector<ll>> dist;
ll n, m, q;

void floydWarshall() {
    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> q;

    dist.assign(n+1, vector<ll>(n+1, INF));

    for (int i=1; i<=n; i++)
        dist[i][i] = 0;

    for (int i=0; i<m; i++) {
        ll a, b, w; cin >> a >> b >> w;

        dist[a][b] = min(dist[a][b], w);
        dist[b][a] = min(dist[b][a], w);
    }

    floydWarshall();

    for (int i=1; i<=q; i++) {
        ll a, b; cin >> a >> b;

        if (dist[a][b] == INF) cout << "-1" << "\n";
        else cout << dist[a][b] << "\n";
    }

    return 0;
}