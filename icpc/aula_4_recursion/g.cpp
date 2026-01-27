#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

vector<ll> v;
int n;
ll minXOR = 2e30;

void subXOR(int i, ll cOR, ll tXOR) ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i=0; i<n; i++) {
        ll in;
        cin >> in;
        v.push_back(in);
    }

    subXOR(0, v[0], 0ll);

    cout << minXOR;

    return 0;
}

void subXOR(int i, ll cOR, ll tXOR) {
    if (i == n) {
        tXOR ^= cOR;
        minXOR = min(minXOR, tXOR);
        return;
    } 

    subXOR(i+1, cOR | v[i], tXOR);
    if (i > 0)
        subXOR(i+1, v[i], tXOR ^ cOR);
}