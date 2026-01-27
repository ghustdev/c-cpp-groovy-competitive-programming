#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

void macas(ll i); 

v_i v;
v_i vv;
ll n;  
ll S_total = 0;
ll difer = 0;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i=0; i<n ;i++) {
        ll value;
        cin >> value;
        v.push_back(value);
        S_total += (ll) v[i];
    }

    difer = S_total;

    macas(0ll);

    cout << difer;

    return 0;
}

void macas(ll i) {
    if (i == n) {
        ll S = 0;
        for (int x: vv) {
            S += (ll) x;
        }
        ll r = S_total - S;
        if ((abs(r - S) < difer) && S != 0 && S != S_total) {
            difer = abs(r - S);
        }
        return;
    }

    macas(i+1);
    vv.push_back(v[i]);
    macas(i+1);
    vv.pop_back(); 
}