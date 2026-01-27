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
const ll MOD = (ll)1e8+7; 

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

ll higher;
vector<ll> fibo;

void fib(int n) {
    ll f[n + 2];
    fibo.assign(n + 2, 0);

    f[0] = 0;
    f[1] = 1;

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i=2; i<=n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % MOD;
        fibo[i] = (f[i - 1] + f[i - 2]) % MOD;
    }
}

int main () 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    higher = (ll) 5 * 1e5; 
    fib(higher);
    
    int T = 1;
    cin >> T;
    while(T--) {
        ll n; cin >> n;
        cout << fibo[n] << "\n";
    }

    return 0;
}