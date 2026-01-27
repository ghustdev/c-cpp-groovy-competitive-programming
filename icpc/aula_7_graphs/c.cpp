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
const int MAXM = 2*1e5 + 10;

vector<int> adj[MAXN];
vector<int> path(MAXN, -1);
vector<int> dist(MAXN, -1);
int n;

bool bfs() {
    queue<int> q;

    int s = 1;
    dist[s] = 0;
    q.push(s);

    while(!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == n) return true;
        
        for (int neighbor : adj[curr]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[curr] + 1;
                path[neighbor] = curr;
                q.push(neighbor);
            }
        }
    }
    return false;
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

    if (!bfs()) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    
    vector<int> out;
    for (int p = n; p != -1; p = path[p]) 
        out.push_back(p);
    
    reverse(out.begin(), out.end());

    cout << dist[n] + 1 << "\n";
    for (int p : out)
        cout << p << " ";
    
    return 0;
}