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


void solve() {
    int n; cin >> n;

    int abslut;

    if (n == 1) abslut = 1;
    else if (n == 2) abslut = 1;
    else if (n%2==0) 
        abslut = abs(((2 + n)*(n/2)/2) - ((n*(n-1)/2)/2));
    else 
        abslut = abs(((1 + n)*((n + 1)/2)/2) - ((1 + n)*((n-1)/2)/2));

    string out =  abslut % 2 == 0 ? "PAR" : "IMPAR";
    cout << out;
}


int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
        cout << "\n";
    }

    return 0;
}