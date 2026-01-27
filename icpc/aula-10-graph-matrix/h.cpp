#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
inline void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> umll;
// typedef unordered_map<int, int> umii;
// typedef unordered_set<ll> usll;
// typedef priority_queue<ll> pqll;
// typedef priority_queue<int> pqi;
// typedef priority_queue<int, vector<int>, greater<int>> pqi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

// --- Vars ---
const int INF = 1e9;
const ll LINF = (ll)4e18;

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

// --- Code ---
void solve() {
    int n, m, k; cin >> n >> m >> k; 

    vector<vector<char>> grid(n, vector<char>(m));

    int initX = -1;
    int initY = -1;
    ll countDot =  0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '.') {
                initX = i;
                initY = j;
                countDot++;
            }
        }
    }

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         cout << grid[i][j];
    //     }
    //     cout << "\n";
    // }

    queue<pair<int,int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // cout << initX << " " << initY << " " << countDot << "\n";
    q.push({initX, initY});
    visited[initX][initY] = true;

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    ll count = 0;
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        
        for (int i=0; i<4; i++) {
            int posX = x + dx[i];
            int posY = y + dy[i];
            
            if (posX >= 0 && posX < n && posY >= 0 && posY < m && grid[posX][posY] == '.' && !visited[posX][posY]) {
                visited[posX][posY] = true;
                q.push({posX, posY});
                count++;

                if (count >= countDot - k) {
                    grid[posX][posY] = 'X';
                }
            }
        }
    } 

    cout << "\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }
}

int main () 
{
    fast_io();
    
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}