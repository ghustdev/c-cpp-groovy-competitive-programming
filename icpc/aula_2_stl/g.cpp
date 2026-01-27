#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++)
    {
        ll n; cin >> n;
        map<ll, ll> freq;
        map<ll, ll> ::iterator it;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            freq[x-j]++;
        }
        ll count_pair = 0;
        for (it = freq.begin(); it != freq.end(); it++) {
            count_pair += (*it).second * ((*it).second - 1) / 2;
        }
        
        cout << count_pair << "\n";
    }

    return 0;
}