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
vector<int> bicolor;
ll group_1 = 1;
ll group_2 = 0;

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
                bicolor[v] = bicolor[curr] % 2 + 1;
                if (bicolor[v] == 1) group_1++;
                if (bicolor[v] == 2) group_2++;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;

    for (int i = 1; i <= n-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bicolor.assign(n+1, 0);
    
    bfs(1);

    ll out = (group_1 * group_2) - (n-1);

    cout << out;

    return 0;
}