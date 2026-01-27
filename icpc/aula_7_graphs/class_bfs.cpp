#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pi;
typedef vector<pair<int, int>> v_pi;
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

const int MAX2 = 1e5 + 5; // number max of elements

vector<int> adj[MAX2]; // using lists of adjacents
// vector<bool> visited(MAX2);
// int matrix[n][n]; // using matrix -> não funcional

// using queue
// queue<int> q; // frequentemente útil para BFS

// --- BFS ---
// visited[x] = true;
// distance[x] = 0;
// q.push(x);
// while (!q.empty()) {
//     int s = q.front(); q.pop();
//     // processa o no s
//     for (auto u : adj[s]) {
    //     if (visited[u]) continue;
    //     visited[u] = true;
    //     distance[u] = distance[s]+1;
    //     q.push(u);
    // }
// }

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m; cin >> n >> m; 

    for (int i=0; i<m; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector <int> dist(n+1, -1);
    int max_distance = 0;
    for (int s=1; s<=n; s++) {
        if (dist[s] > -1) continue;
        
        dist[s] = 0;

        queue<int> q;
        q.push(s);

        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            
            for (int neighbor : adj[curr]) {
                if (dist[neighbor] == -1) {
                    dist[neighbor] = dist[curr] + 1;
                    q.push(neighbor);
                    max_distance = max(max_distance, dist[neighbor]);
                }
            }
        }
    }

    cout << max_distance;

    return 0;
}