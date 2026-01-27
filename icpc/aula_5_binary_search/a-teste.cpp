#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<ll> v_ll;
typedef vector<pair<int, int>> v_pair_i;
typedef vector<pair<long, long>> v_pair_ll;
typedef unordered_map<ll, ll> u_map_ll;
typedef map<ll, ll> map_ll;
typedef unordered_map<int, int> u_map_ii;
typedef unordered_map<string, bool> u_map_str;
typedef unordered_map<char, ll> u_map_c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    v_ll v;
    v_pair_ll p(n);

    for (ll i = 0; i < n; i++)
    {
        ll number;
        cin >> number;

        p[i].first = number;
        p[i].second = i;
    }

    sort(p.begin(), p.end());

    ll y = 0;
    ll z = n - 1;
    bool is = false;
    while (y < z)
    {
        if (x == p[y].first + p[z].first)
        {
            is = true;
            if (p[y].first > p[z].first)
                cout << p[y].second + 1 << " " << p[z].second + 1;
            else
                cout << p[z].second + 1 << " " << p[y].second + 1;
            break;
        }
        else if (x < p[y].first + p[z].first)
            z--;
        else if (x > p[y].first + p[z].first)
            y++;
    }
    if (!is)
        cout << "IMPOSSIBLE";

    return 0;
}