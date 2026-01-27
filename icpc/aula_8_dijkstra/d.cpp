#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
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
const int MAXN = 2 * 1e5 + 10;
const int MAXM = 2 * 1e5 + 10;

vector<int> adj[MAXN];
vector<int> dist_s;
vector<int> dist_e;
vector<int> dist;
int n, m, max_dist, n_max, n_e, n_s;

void bfs(int s) {
    dist[s] = 0;
    max_dist = 0;
    n_max = s;

    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int curr = q.front(); q.pop();

        for (int v : adj[curr]) {
            if (dist[v] == -1) {
                dist[v] = dist[curr] + 1;
                q.push(v);
                if (max_dist < dist[v]) n_max = v;
                max_dist = max(max_dist, dist[v]);
            }
        }
    }
}

void bfs_each_node(int s) {
    if (s == n_e) dist_e[s] = 0;
    if (s == n_s) dist_s[s] = 0;

    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int curr = q.front(); q.pop();

        for (int v : adj[curr]) {
            if (s == n_e) {
                if (dist_e[v] == -1) {
                    dist_e[v] = dist_e[curr] + 1;
                    q.push(v);
                }
            }
            if (s == n_s) {
                if (dist_s[v] == -1) {
                    dist_s[v] = dist_s[curr] + 1;
                    q.push(v);
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dist_e.assign(n+1, -1);
    dist_s.assign(n+1, -1);
    
    int start = 1;
    dist.assign(n+1, -1);
    bfs(start);
    n_e = n_max;
    
    dist.assign(n+1, -1);
    bfs(n_e);
    n_s = n_max;

    bfs_each_node(n_e);
    bfs_each_node(n_s);

    for (int v=1; v<=n; v++) {
        cout << max(dist_e[v], dist_s[v]) << " ";
    }

    return 0;
}
