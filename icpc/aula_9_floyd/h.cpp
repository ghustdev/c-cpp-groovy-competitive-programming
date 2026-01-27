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

// --- Functions ---


// --- Code ---
const int INF = 1e5 + 5;

vector<vector<int>> dist;
int n;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    dist.assign(n+1, vector<int>(n+1, 0));

    for (int i=1; i<=n; i++)
        dist[i][i] = 0;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int w; cin >> w;
            dist[i][j] = w;
        }
    }
    
    int k; cin >> k;
    for (int i=1; i<=k; i++) {
        int a, b, p; cin >> a >> b >> p;
        
        if (p < dist[a][b]) {
            dist[a][b] = p;
            dist[b][a] = p;
            
            for (int i=1; i<=n; i++) {
                for (int j=1; j<=n; j++) {
                    if (dist[i][a] + dist[a][b] + dist[b][j] < dist[i][j]) {
                        dist[i][j] = dist[i][a] + dist[a][b] + dist[b][j];
                        dist[j][i] = dist[i][j];
                    }
                    if (dist[i][b] + dist[b][a] + dist[a][j] < dist[i][j]) {
                        dist[i][j] = dist[i][b] + dist[b][a] + dist[a][j];
                        dist[j][i] = dist[i][j];
                    }
                }
            }
        }
        
        ll sum = 0;
        for (int i=1; i<=n; i++) {
            for (int j=i+1; j<=n; j++) 
                sum += dist[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}