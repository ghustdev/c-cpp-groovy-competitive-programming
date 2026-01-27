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
vector<bool> visited(MAXN, false);
vector<int> out;
vector<int> bicolor;
bool is_bicolor;

void bfs(int s) {
    queue<int> q;

    q.push(s);
    visited[s] = true;
    bicolor[s] = 1;

    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        
        vector<int> neighbors;
        for (int v : adj[curr]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
            if (bicolor[v] == bicolor[curr]) {
                is_bicolor = false;
                return;
            } else {
                bicolor[v] = bicolor[curr] % 2 + 1;
            }

            // if (bicolor[curr] == bicolor[ant]) 
            //     bicolor[v] = bicolor[ant] % 2 + 1;
            // else {
            //     is_bicolor = false;
            //     return;
            // }
            // ant = v;
        }
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

    bicolor.assign(n+1, 0);
    is_bicolor = true;
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        bfs(i);
    }
    if (is_bicolor) {
        for (int o : bicolor) {
            if (o != 0)
                cout << o << " ";
        }    
    } else
        cout << "IMPOSSIBLE" << " ";

    return 0;
}