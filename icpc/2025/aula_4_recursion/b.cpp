#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, S = 0; cin >> n;
    vi vec(n);
    vi vec_copy(n);

    unordered_map <ll, ll> freq;
    unordered_map <int, ll> result;

    for (ll i=0; i<n; i++) {
        cin >> vec[i];
        vec_copy[i] = vec[i];
        S += vec[i];
        freq[vec[i]]++;
    }

    sort(vec.begin(), vec.end());

    ll i=0;
    while (i<n) {
        ll v = vec[i];
        result[v] = S - 1LL * freq[v] * v;
        S -= 1LL * freq[v] * v;
        i += freq[v];
    }

    for (int i=0; i<n; i++) {
        cout << result[vec_copy[i]] << " ";
    }

    return 0;
}