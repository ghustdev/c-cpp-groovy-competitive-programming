#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
typedef vector<pair<int, int>> vpii;
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


// --- Code ---
int main ()
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    int h, w; cin >> h >> w;
    char mat[h][w];

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            char c; cin >> c;
    
            mat[i][j] = c;
        }
    }

    int n = min(h,w);
    vector<int> out(n,0);
    int count = 0;

    for (int i=0; i<h; i++) {   
        for (int j=0; j<w; j++) {
            if ((mat[i][j] == '#' && mat[i+1][j+1] == '#' && mat[i-1][j+1] == '#' && mat[i+1][j-1] == '#' && mat[i-1][j-1] == '#') && (i-1 >= 0 && j-0 >= 0 && i+1 < h && j+1 < w)) {
                // cout << "- entrei " << i << " " << j << "\n";
                int dy = i+1;
                int dx = j+1;
                while (dx < w && dy < h && mat[dy][dx] == '#') {
                    dy++;
                    dx++;
                    count++;
                }
                out[count-1]++;
                count = 0;
            }
        }
    }

    for (int i=0; i<n; i++)     
        cout << out[i] << " ";

    return 0;
}