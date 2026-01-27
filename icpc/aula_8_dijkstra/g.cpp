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

// -- teste -- 

// --- Code ---
const ll INF = 1e16;
const int MAXN = 1e5 + 10;
const int MAXM = 1e5 + 10;
const int MAXK = 10;

vector<vector<pll>> adj(MAXN);
int n, m, k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k;

    for (int i = 1; i <= m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;

        adj[a].push_back({b, w});
    }

    int ori = 1;

    vector<priority_queue<ll>> dist(n + 1);
    dist[ori].push(0);

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({0, ori});

    while (!pq.empty())
    {
        int node = pq.top().second; 
        ll weight = pq.top().first; 
        pq.pop();

        if (dist[node].size() == (size_t) k && weight > dist[node].top()) continue;

        for (auto edge : adj[node])
        {
            int v = edge.first;
            ll p = edge.second;

            if (dist[v].size() < (size_t) k)
            {
                dist[v].push(weight + p);
                pq.push({weight + p, v});
            }
            else if (weight + p < dist[v].top()) {
                dist[v].pop();
                dist[v].push(weight + p);
                pq.push({weight + p, v});
            }
        }
    }

    vector<ll> out;
    while(!dist[n].empty()) {
        out.push_back(dist[n].top());
        dist[n].pop();
    }

    for (int i=k-1; i>=0; i--) cout << out[i] << " ";

    return 0;
}