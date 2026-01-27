#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pi;
typedef vector<pair<int, int>> v_pi;
// typedef vector<pair<long, long>> v_pll;
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

const int MAXN = 2 * 1e5 + 5; // number max of elements

vector<int> adj[MAXN]; // using lists of adjacents
vector <int> subordinates;
vector <bool> visited;

// --- DFS ---
void dfs(int s, int father) {  
    visited[s] = true;
    for (auto n : adj[s]) {
        if (visited[n]) continue;
        dfs(n, s);

        subordinates[s] += (subordinates[n] + 1);
    }
}


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;

    visited.assign(n+1, false);
    subordinates.assign(n+1, 0);

    for (int i=2; i<=n; i++) {
        int a; cin >> a;

        adj[i].push_back(a);
        adj[a].push_back(i);
    }
    
    dfs(1, 0);

    for (int i = 1; i <= n; i++)
        cout << subordinates[i] << " ";

    return 0;
}