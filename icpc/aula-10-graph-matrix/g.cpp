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
int r, c;

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

// --- Code ---
void solve() {
    int m; cin >> m;

    vector<vector<int>> matrix(r, vector<int>(c, 1));

    while (m--) {
        int a, b; cin >> a >> b;
        matrix[a-1][b-1] = 0;
    }

    int n; cin >> n;

    while (n--) {
        int a, b, l; cin >> a >> b >> l;
        a--; b--;

        int startX = max(0, a - l);
        int endX = min(r-1, a + l);
        int startY = max(0, b - l);
        int endY = min(c-1, b + l);

        for (int i = startX; i <= endX; i++) {
            for (int j = startY; j <= endY; j++) {
                if ((i-a)*(i-a) + (j-b)*(j-b) <= l*l)
                    matrix[i][j] = 0;
            }
        }
    }

    // for (int i=0; i<r; i++) {
    //     for (int j=0; j<c; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    if (!matrix[0][0] || !matrix[r-1][c-1]) {
        cout << "Impossible\n";
        return;
    }

    queue<pair<int,int>> q;
    vector<vector<int>> dist(r, vector<int>(c, -1));

    q.push({0,0});
    dist[0][0] = 0;

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i=0; i<4; i++) {
            int posX = x + dx[i];
            int posY = y + dy[i];

            if (posX >= 0 && posX < r && posY >= 0 && posY < c && matrix[posX][posY] && dist[posX][posY] == -1) {
                dist[posX][posY] = dist[x][y] + 1;
                q.push({posX, posY});
            }
        }
    } 

    if (dist[r-1][c-1] == -1) 
        cout << "Impossible.\n";
    else 
        cout << dist[r-1][c-1] << "\n";
}

int main () 
{
    fast_io();
    
    // int T = 1;
    // cin >> T;
    while (true) {
        cin >> r >> c;
        if (r == 0 && c == 0) break;
        solve();
    }

    return 0;
}