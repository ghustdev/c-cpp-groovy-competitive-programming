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

const int MAX = 1e3 + 10;
const int MA2 = 1e5 + 10;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;

    vector<int> graph[n];
    int mat[n][n];
    
    int it = m;
    while(it--) {
        int a, b; cin >> a >> b;
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }



    queue<int> q;
    bool visited(MAX);
    vector<int> dist(MAX);

    return 0;
}