#include <bits/stdc++.h>
using namespace std;

inline void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

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

// --- Vars ---
const int INF = 1e9;
const ll LINF = (ll)4e18;

// --- Functions ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

// --- Code ---
bool any_between(ll a, ll b, ll x) {
    if (a < b) return (x > a && x < b);
    return (x > a || x < b);
}

void solve() {
    int h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;

    const ll SCALE = 43200; // 12*3600
    ll hour_pos   = (h % 12) * 3600LL + m * 60LL + s;
    ll minute_pos = (m * 60LL + s) * 12LL;
    ll second_pos = s * 720LL;
    ll t1_pos = (t1 % 12) * 3600LL;
    ll t2_pos = (t2 % 12) * 3600LL;

    bool blockedCW = false;
    blockedCW |= any_between(t1_pos, t2_pos, hour_pos);
    blockedCW |= any_between(t1_pos, t2_pos, minute_pos);
    blockedCW |= any_between(t1_pos, t2_pos, second_pos);

    bool blockedCCW = false;
    blockedCCW |= any_between(t2_pos, t1_pos, hour_pos);
    blockedCCW |= any_between(t2_pos, t1_pos, minute_pos);
    blockedCCW |= any_between(t2_pos, t1_pos, second_pos);

    cout << ((!blockedCCW || !blockedCW) ? "YES" : "NO");
}

int main () 
{
    fast_io();
    
    int T = 1;
    // cin >> T;
    while(T--) solve();

    return 0;
}