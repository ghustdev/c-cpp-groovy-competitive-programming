#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i, count = 1; cin >> n;
    vector<int> X(n);

    for (i=0;i<n;i++) {
        ll x;
        cin >> x;
        X[i] = x;
    }

    sort(X.begin(), X.end());

    for (i=1;i<n;i++) {
        if (X[i - 1] != X[i]) count++;
    }

    cout << count;

    return 0;
}