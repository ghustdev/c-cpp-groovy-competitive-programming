#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> v_i;
typedef vector<ll> v_ll;
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

    int t;
    cin >> t;

    while (t--)
    {
        ll n, s;
        cin >> n >> s;

        v_i binary(n + 1), prefix(n + 2, 0);

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> binary[i];
            sum += binary[i];
        }

        for (int i = 1; i <= n; i++)
            prefix[i] = prefix[i - 1] + binary[i];

        if (sum < s)
        {
            cout << -1 << "\n";
            continue;
        }

        ll l = 1;
        ll r_limit = n;
        ll r = r_limit;
        ll cases = (n + 1) * n / 2;
        // int tam = n;
        for (ll i = 1; i <= cases; i++)
        {
            if (prefix[r] - prefix[l - 1] == s)
            {
                // tam = r - l + 1;
                cout << n - (r - l + 1) << "\n";
                break;
            }

            l++;
            r++;

            if (r == n + 1)
            {
                r_limit--;
                l = 1;
                r = r_limit;
            }
        }
    }

    return 0;
}