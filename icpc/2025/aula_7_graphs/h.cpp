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

const int MAX2 = 2 * 1e5 + 5; // number max of elements

int n;
vector<int> adj[MAX2]; // using lists of adjacents
vector <int> dist;
int max_distance = 0;
int node_max_distance;

void bfs(int start) {  
    dist[start] = 0;

    queue<int> q;
    q.push(start);

    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int neighbor : adj[curr]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[curr] + 1;
                q.push(neighbor);
                if (max_distance < dist[neighbor]) {
                    // cout << neighbor << " - - " << max_distance << "\n";
                    node_max_distance = neighbor;
                }
                max_distance = max(max_distance, dist[neighbor]);
                // cout << neighbor << " - " << max_distance << "\n";
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n; 

    dist.assign(n+1, -1);

    for (int i=0; i<n-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    dist.assign(n+1, -1);

    bfs(node_max_distance);

    cout << max_distance;

    return 0;
}