#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> u_mll;
typedef unordered_map<int, int> u_m;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

// --- Vars ---
const int INF = 1e5 + 10;

vector<vector<int>> dist;
int n;

// --- Functions ---
void floydWarshall() {
    for (int k=0; k<n; k++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    int t; cin >> t;
    for (int caso = 1; caso <= t; caso++){
        cin >> n;
        
        dist.assign(n, vector<int>(n, INF));
        
        for (int i=0; i<n; i++)
            dist[i][i] = 0;
        
        for (int a=0; a<n; a++) {
            for (int b=0; b<n; b++) {
                int w; cin >> w;
                dist[a][b] = w;
            }
        }
        
        floydWarshall();
        
        int r; cin >> r;
        ll total_dist = 0;
        for (int i=0; i<r; i++) {
            int s, d; cin >> s >> d;
            total_dist += dist[s-1][d-1];
        }

        cout << "Case #" << caso << ": " << total_dist << "\n";
    }

    return 0;
}