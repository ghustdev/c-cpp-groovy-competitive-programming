// Lampions League

#include <bits/stdc++.h>
using namespace std;

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
    ll n; cin >> n;

    list<char> v(n); 

    map<ll,ll> map;
    ll numA = 0;

    while (n--) {
        ll tipo; char torcedor; cin >> tipo >> torcedor;

        ll interacoes = 0;

        if (tipo == 1) {
            v.push_back(torcedor);
            // if (torcedor == 'A') {

            // }
        }
        else if (tipo == 2) {
            v.push_front(torcedor);
        }
        else if (tipo == 3) {
            v.pop_back();
        }
        else {
            v.pop_front();
        }

        for (char t : v){
            if (t == 'A') {
                numA++;
                map[numA] = 0;
            }
            else {
                for (auto [k, valor] : map) {
                    map[k]++;
                }
            }

            for (auto [k, valor] : map) {
                interacoes += valor;
            }
        }

        // if (torcedor == 'A') {
        //     numA++;
        //     map[numA] = 0;
        // }
        // else {
        //     for (auto [k, valor] : map) {
        //         map[k]++;
        //     }
        // }

        // for (auto [k, valor] : map) {
        //     interacoes += valor;
        // }

        cout << interacoes;
    }
}


int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
        cout << "\n";
    }

    return 0;
}