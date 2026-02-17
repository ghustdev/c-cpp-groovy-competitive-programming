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
        int r; 
        cin >> r;
        
        dist.assign(n, vector<int>(n, INF));
        
        for (int i=0; i<n; i++)
            dist[i][i] = 0;
        
        for (int i=0; i<r; i++) {
            int a, b; cin >> a >> b;
            
            dist[a][b] = 1;
            dist[b][a] = 1;
        }
        
        int s, d; cin >> s >> d;
        
        floydWarshall();

        int time = 0;
        for (int i=0; i<n; i++) {
            if (dist[s][i] < INF && dist[i][d] < INF)
                time = max(time, dist[s][i] + dist[i][d]);
        }

        cout << "Case " << caso << ": " << time << "\n";
    }

    return 0;
}