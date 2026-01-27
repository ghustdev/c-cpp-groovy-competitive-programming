#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pi;
// typedef vector<pair<int, int>> v_pi;
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
const int MAXN = 1e3 * 5;

vector<int> adj[MAXN];
vector <bool> visited;

bool is_triangle = false;

void dfs (int s, int ant) {
    visited[s] = true;
    for (int n : adj[s]) {
        if (visited[n] && n != ant && (int)adj[s].size() == 2) {
            is_triangle = true;
        }
        if (visited[n]) continue;
        dfs(n, s);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n+1);

    visited.assign(n+1, false);

    for (int i = 1; i <= n; i++) cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        a = i;
        b = v[a];
        c = v[b];

        if (v[c] == i)
            is_triangle = true;

        adj[a].push_back(b);
    }

    // for (int i = 1; i <= n; i++) {
    //     if (visited[i]) continue;
    //     dfs(i, i);
    // }

    is_triangle ? cout << "YES" :  cout << "NO";

    return 0;
}