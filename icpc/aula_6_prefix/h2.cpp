#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
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
        int n, s;
        cin >> n >> s;

        v_i binary(n + 1), prefix(n + 2, 0), sufix(n + 2, 0);

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> binary[i];
            sum += binary[i];
        }

        for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + binary[i];       
        
        for (int i = n; i>=1; i--) sufix[i] = sufix[i + 1] + binary[i]; 
        
        sort(sufix.begin(), sufix.end());

        if (sum < s) {
            cout << -1 << "\n";
            continue;
        }
        
        int target = sum - s;
        int mini = n+1;
        int pos_suf;
        int pos_pref;
        for (int i=target; i>=1; i--) {
            if (i != target) {
                pos_suf = upper_bound(sufix.begin(),sufix.end(), (i-1)) -  sufix.begin();
                pos_suf-=1;
                pos_pref = upper_bound(prefix.begin(),prefix.end(), (target-i-1)) -  prefix.begin();
                if ((pos_pref + pos_suf) < mini) {
                    mini = pos_pref + pos_suf;
                }
            }
            else {
                pos_pref = upper_bound(prefix.begin(),prefix.end(), (target-1)) -  prefix.begin();
                pos_suf = 0;
                if ((pos_pref + pos_suf) < mini) {
                    mini = pos_pref + pos_suf;
                }
                pos_suf = upper_bound(sufix.begin(),sufix.end(), (target-1)) -  sufix.begin();
                pos_suf-=1;
                pos_pref = 0;
                if ((pos_pref + pos_suf) < mini) {
                    mini = pos_pref + pos_suf;
                }
            }
        }

        target ? cout << mini << "\n" : cout << 0 << "\n";
    }

    return 0;
}