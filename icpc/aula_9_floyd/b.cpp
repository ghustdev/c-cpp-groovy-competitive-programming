#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> u_mll;
typedef unordered_map<string, int> u_m;
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
void floyWarshall() {
    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
    }
}

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    int t; cin >> t;
    while (t--) {
        int cities; cin >> cities;
        n = cities;
        
        // vector<string> v(cities+1);
        dist.assign(n+1, vector<int>(n+1, INF));
        u_m mp;

        for (int i=1; i<=n; i++)
            dist[i][i] = 0;
        
        int city = 1;
        while (city <= cities) {
            string name_city; cin >> name_city;
            // v[city] = name_city;
            mp[name_city] = city;

            int p; cin >> p;

            for (int i=1; i<=p; i++) {
                int c, w; cin >> c >> w;

                dist[city][c] = min(dist[city][c], w);
                dist[c][city] = min(dist[c][city], w);
            }
            city++;
        }
        // cout << "cheguei no floyd" << "\n";

        floyWarshall();
        // cout << "passei no floyd" << "\n";

        int r; cin >> r;
        for (int i=1; i<=r; i++) {
            string c1, c2; cin >> c1 >> c2;

            // cout << "teste?" << "\n";
            cout << dist[mp[c1]][mp[c2]] << "\n";
            // cout << "promblem?" << "\n";
        }
    }


    return 0;
}