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
    int n; cin >> n;
    string str; cin >> str;
    map<char, int> mp;

    int highest = -1;
    int cont = 0;
    for (int i=n-1; i>0; i--) {
        mp[str[i]]++;

        if (str[i] != str[i-1]) {
            cont++;
            str[i-1] = str[i];
        }

        if (mp[str[i]] > highest) highest = mp[str[i]];
    }

    // cout << n - highest << "\n";
    cout << cont;
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