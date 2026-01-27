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

// --- Vars ---
const ll INF = 1e18;
const int MAXN = 1e3 + 10;
vector<vector<bool>> visited;
vector<vector<bool>> adj;
int n, m;

// --- Functions ---
void dfs(int x, int y) {
    visited[x][y] = 1;

    if ((x+1 < n && adj[x+1][y]) && !visited[x+1][y])
        dfs(x+1, y);
    if ((x-1 >= 0 && adj[x-1][y]) && !visited[x-1][y])
        dfs(x-1, y);
    if ((y+1 < m && adj[x][y+1]) && !visited[x][y+1])
        dfs(x, y+1);
    if ((y-1 >= 0 && adj[x][y-1]) && !visited[x][y-1])
        dfs(x, y-1);
}

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    cin >> n >> m;
    
    adj.assign(n, vector<bool>(m, 0));
    visited.assign(n, vector<bool>(m, 0));

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char path; cin >> path;
            if (path == '.')
                adj[i][j] = 1;
            else 
                adj[i][j] = 0;
        }
    } 

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++)  {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int rooms = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)  {
            if (visited[i][j]) continue;

            if (adj[i][j]) {
                dfs(i, j);
                rooms++;
            }
        }
    }

    cout << rooms << "\n";

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++)  {
    //         cout << visited[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    return 0;
}