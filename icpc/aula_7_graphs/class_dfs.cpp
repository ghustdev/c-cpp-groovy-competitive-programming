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

const int MAX2 = 1e5 + 5; // number max of elements

const int n = 6;
vector<int> graph[n]; // using lists of adjacents
vector<bool> visited(n);
map<int, int> subordinates;
// int matrix[n][n]; // using matrix -> não funcional

// using queue
queue<int> q; // frequentemente útil

void dfs(int s, int ant) {    
    if (visited[s]) return;
    visited[s] = true;
    cout << s << " " << ant << " - ";
    for (auto n : graph[s]) {
        dfs(n, s);
    }
}

// int qt[n];
// void dfs_aula(int u, int ant) {
//     for (int v : graph[u]) {
//         if (v != ant)
//             dfs_aula(v, u);
//     }
// }

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m; cin >> n >> m;

    for (int i=0; i<m; i++) {
        int a, b; cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        subordinates[graph[n][0]] = graph[n].size();
    }

    // dfs_aula(1, 1);
    dfs(1, 1);

    return 0;
}