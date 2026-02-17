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
const int MAXM = 2 * 1e5 + 10;

vector<vector<pll>> adj(MAXN); 

int n, m;
ll price;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int last = n;

    for (int i = 1; i <= m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;

        adj[a].push_back({b, w});
    }

    int origin = 1;

    vector<vector<ll>> dist(n+1, vector<ll>(2, INF));
    dist[origin][0] = 0;

    using t = tuple<ll, int, int>;
    priority_queue<t, vector<t>, greater<t>> pq;
    pq.emplace(0, origin, 0);

    while (!pq.empty())
    {
        auto [w, n, state] = pq.top(); 
        pq.pop();

        if (w != dist[n][state]) continue;

        for (auto [v, p] : adj[n])
        {
            if (w + p < dist[v][state])
            {
                dist[v][state] = w + p;
                pq.emplace(w + p, v, state);
            }
            ll w_coupon = w + (p/2);
            if (state == 0 && w_coupon < dist[v][1]) {
                dist[v][1] = w_coupon;
                pq.emplace(w_coupon, v, 1);
            }
        }
    }

    cout << dist[last][1];

    return 0;
}