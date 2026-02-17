#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

void multiple(ll i); 

string vv;  
ll max_length_n = -1;
string n_str;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    n_str = to_string(n);

    multiple(0ll);

    if (max_length_n > -1) {
        cout << (ll) n_str.length() - max_length_n;
    } else 
        cout << -1;

    return 0;
}

void multiple(ll i) {
    if (i == ((ll) n_str.length())) {
        ll S = 0;
        for (char x: vv) {
            S += (x - '0');
        }
        if (S % 3 == 0 && S > 0) {
            if ((ll) vv.length() > max_length_n)
                max_length_n = (ll) vv.length();
        }
        return;
    }

    multiple(i+1);
    vv.push_back(n_str[i]);
    multiple(i+1);
    vv.pop_back(); 
}