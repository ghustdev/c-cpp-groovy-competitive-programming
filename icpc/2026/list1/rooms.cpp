#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

vector<vector<bool>> visited;
vector<vector<bool>> adj;
ll n, m;

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

void solve() {
    cin >> n >> m;
    
    adj.assign(n, vector<bool>(m, 0));
    visited.assign(n, vector<bool>(m, 0));

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char square; cin >> square;
            if (square == '.')
                adj[i][j] = 1;
            else 
                adj[i][j] = 0;
        }
    } 

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
}

int main() {
    _;

    int T = 1;
    // cin >> T;

    while(T--) {
        solve();
        cout << endl;
    }

    return 0;
}