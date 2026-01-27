#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i, higher1 = 0, higher2 = 0;
    cin >> n;
    vector<ll> a(n), b(n);

    for (i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x;
        b[i] = x;
    }

    sort(a.begin(), a.end());

    higher1 = a[n-1];
    if (a[n-2] != higher1) higher2 = a[n-2];
    else higher2 = higher1;


    for (i = 0; i < n; i++) {
        if (b[i] == higher1) 
            cout << higher2 << "\n";
        else
            cout << higher1 << "\n";
    }

    return 0;
}