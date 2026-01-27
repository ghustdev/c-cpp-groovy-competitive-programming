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

// --- Functions ---
int n;

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    cin >> n;
    
    int origin = 0;
    queue<pair<int,int>> q;
    vector<vector<ll>> dist(n, vector<ll>(n, -1));

    // genial
    int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
    int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};

    q.push({origin, origin});
    dist[origin][origin] = 0;

    while (!q.empty()) {
        int x = q.front().first; 
        int y = q.front().second; 
        q.pop();

        for (int i=0; i<8; i++) {
            int moveX = x + dx[i];
            int moveY = y + dy[i];

            if (moveX < n && moveX >= 0 && moveY >= 0 && moveY < n && dist[moveX][moveY] == -1) {
                dist[moveX][moveY] = dist[x][y] + 1;
                q.push({moveX, moveY});
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}