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
vector<vector<char>> parents;
bool valid = false;
int n, m;
int sx = -1, sy = -1, dx = -1, dy = -1;

// --- Functions ---
// void dfs(int x, int y) {
//     if (x == dx && y == dy) {
//         valid = true;
//     }

//     visited[x][y] = 1;

//     if ((x+1 < n && adj[x+1][y]) && !visited[x+1][y]) {
//         dfs(x+1, y); // D
//         parents[x+1][y] = 'D';
//     }
//     if ((x-1 >= 0 && adj[x-1][y]) && !visited[x-1][y]) {
//         dfs(x-1, y); // U
//         parents[x-1][y] = 'U';
//     }
//     if ((y+1 < m && adj[x][y+1]) && !visited[x][y+1]) {
//         dfs(x, y+1); // R
//         parents[x][y+1] = 'R';
//     }
//     if ((y-1 >= 0 && adj[x][y-1]) && !visited[x][y-1]) {
//         dfs(x, y-1); // L
//         parents[x][y-1] = 'L';
//     }
// }

void bfs(int sx, int sy) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == dx && y == dy) {
            valid = true;
            return;
        }

        // D
        if (x+1 < n && adj[x+1][y] && !visited[x+1][y]) {
            visited[x+1][y] = true;
            parents[x+1][y] = 'D';
            q.push({x+1, y});
        }

        // U
        if (x-1 >= 0 && adj[x-1][y] && !visited[x-1][y]) {
            visited[x-1][y] = true;
            parents[x-1][y] = 'U';
            q.push({x-1, y});
        }

        // R
        if (y+1 < m && adj[x][y+1] && !visited[x][y+1]) {
            visited[x][y+1] = true;
            parents[x][y+1] = 'R';
            q.push({x, y+1});
        }

        // L
        if (y-1 >= 0 && adj[x][y-1] && !visited[x][y-1]) {
            visited[x][y-1] = true;
            parents[x][y-1] = 'L';
            q.push({x, y-1});
        }
    }
}

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    cin >> n >> m;
    
    adj.assign(n, vector<bool>(m, 0));
    visited.assign(n, vector<bool>(m, 0));
    parents.assign(n, vector<char>(m, 0));

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char path; cin >> path;

            if (path == '.')
                adj[i][j] = 1;
            else if (path == 'A') {
                sx = i;
                sy = j;
                adj[i][j] = 1;
            }
            else if (path == 'B') {
                dx = i;
                dy = j;
                adj[i][j] = 1;
            }
        }
    } 

    // cout << "\n";
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) 
    //         cout << adj[i][j] << " ";
    //     cout << "\n";
    // }

    // cout << "\n" << "opa" << "\n";

    bfs(sx, sy);

    if (!valid) {
        cout << "NO\n";
        return 0;
    }

    // cout << "\n" << "cheguei" << "\n";
    
    string paths;
    int x = dx;
    int y = dy;
    while(x != sx || y != sy) {
        char p = parents[x][y];
        paths += p;
        if (p == 'D') x--;
        else if (p == 'U') x++;
        else if (p == 'R') y--;
        else if (p == 'L') y++;
    }

    reverse(paths.begin(), paths.end());

    cout << "YES" << "\n";
    cout << paths.size() << "\n";
    cout << paths << "\n";
    
    return 0;
}