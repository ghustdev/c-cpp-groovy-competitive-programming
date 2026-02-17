#include <bits/stdc++.h>
using namespace std;
//  a
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, sum = 0; cin >> n;
    vi vec(n);
    vi vec_copy(n);
    vi r(n);
    for (ll i=0; i<n; i++) {
        cin >> vec[i];
        vec_copy[i] = vec[i];
    }

    sort(vec.end(), vec.begin());

    for (ll i=1; i<n; i++) {
        if (vec[i-1] > vec[i]) 
        vec[i]
    }

    return 0;
}