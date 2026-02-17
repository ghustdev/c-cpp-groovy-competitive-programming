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
int n;

// --- Functions ---


// --- Code ---
int main ()
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    int t; cin >> t;

    while (t--) {

        string start, destination; cin >> start >> destination;

        // cout << "\n" << start << " " <<  destination << "\n";
        
        unordered_map<char, int> mp;
        
        mp['a'] = 0; mp['b'] = 1; mp['c'] = 2; mp['d'] = 3; mp['e'] = 4;
        mp['f'] = 5; mp['g'] = 6; mp['h'] = 7; 
        
        n = 8;
        queue<pair<int,int>> q;
        vector<vector<ll>> dist(n, vector<ll>(n, -1));

        // cout << "\n" << start << " " <<  destination << "\n";
        
        int sX = 7 - mp[start[0]];  
        int sY = start[1] - '1';
        int dX = 7 - mp[destination[0]];
        int dY = destination[1] - '1';

        // cout << "\n" <<  sX << sY << " " << dX << dY << "\n";

        dist[sX][sY] = 0;
        
        int chessX[8] = {2, 2, 1, 1, -1, -1, -2, -2};
        int chessY[8] = {1, -1, 2, -2, 2, -2, 1, -1};
    
        q.push({sX, sY});
    
        while (!q.empty()) {
            int x = q.front().first; 
            int y = q.front().second; 
            q.pop();
    
            for (int i=0; i<8; i++) {
                int moveX = x + chessX[i];
                int moveY = y + chessY[i];
    
                if (moveX < n && moveX >= 0 && moveY >= 0 && moveY < n && dist[moveX][moveY] == -1) {
                    dist[moveX][moveY] = dist[x][y] + 1;
                    q.push({moveX, moveY});
                }
            }
        }
    
        cout << dist[dX][dY] << "\n";
    }

    return 0;
}