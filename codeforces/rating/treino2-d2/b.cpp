#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> umll;
// typedef unordered_map<int, int> umii;
// typedef unordered_set<ll> usll;
// typedef priority_queue<ll> pqll;
// typedef priority_queue<int> pqi;
// typedef priority_queue<int, vector<int>, greater<int>> pqi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

const int INF = 1e9;
const ll LINF = (ll)4e18;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
    ll a, b, n; cin >> a >> b >> n; 

    ll moves = 0;
    ll posCurr = 0;

    // 0 -> b 
    if (a/b >= n) moves = 1;
    // 0 -> a=b
    else if (a/b < n && a == b) moves = 1;
    // 0 -> a, a -> b
    else moves = 2;

    // for (int m=n; m>0; m--) {
    //     long double len = min((long double)b, (long double)a/m);
    //     long double posX;

    //     if (len != b) posX = a;
    //     else posX = b;

    //     if (posCurr != posX) {
    //         moves++;
    //         posCurr = posX;
    //     }
    // }

    cout << moves;
}

int main () 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T = 1;
    cin >> T;
    while(T--) {
        solve(); 
        cout << "\n";
    }

    return 0;
}