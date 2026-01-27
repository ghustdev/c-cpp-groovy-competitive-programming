#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i, sum_total = 0, mediana; cin >> n;
    vector<int> sticks(n);

    for (i=0;i<n;i++) {
        ll x;
        cin >> x;
        sticks[i] = x;
    }

    sort(sticks.begin(), sticks.end());

    if (n % 2 == 0) {
            mediana = (sticks[n / 2] + sticks[n / 2 - 1]) / 2;
        } else {
            mediana = sticks[n / 2];
        }

    for (i=0;i<n;i++) {
        mediana - sticks[i] < 0 ? sum_total += -1*(mediana - sticks[i]) : sum_total += mediana - sticks[i];
    }

    cout << sum_total;

    return 0;
}