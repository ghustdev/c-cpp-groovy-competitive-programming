#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
// typedef vector<ll> v_ll;
// typedef map<ll, ll> map_ll;
// typedef set<ll> set_ll;
// typedef unordered_map<ll, ll> u_map_ll;
// typedef vector<ll> v_ll;
// typedef unordered_set<ll> u_set_ll;
// typedef queue<ll> q_ll;
// typedef vector<pair<int, int>> v_pair_i;
// typedef vector<pair<long, long>> v_pair_ll;
// typedef unordered_map<int, int> u_map_ii;
// typedef unordered_map<string, bool> u_map_str;
// typedef unordered_map<char, ll> u_map_c;
// typedef set<ll, greater<ll>> set__ll_greater;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    v_i vect(n);
    int h = 0;

    for (int i=0; i<n; i++) {
        cin >> vect[i];
        if (vect[i] > h) h = vect[i];
    }

    for (int i=h; i>0; i--) {
        for (int j=0; j<n; j++) {
            if (vect[j] >= i)
                cout << "1 ";
            else cout << "0 ";
        }
        cout << "\n";
    }
}