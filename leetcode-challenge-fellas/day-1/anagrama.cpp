#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair_i;
typedef unordered_map <ll, ll> u_map_ll;
typedef unordered_map <string, bool> u_map_str;
typedef unordered_map <char, ll> u_map_c;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "anagrama", t = "namagara";

    unordered_map <char, int> rep_s;
    unordered_map <char, int> rep_t;
    string unique_letters;

    if (s.length() == t.length()) {
        for (int i=0; i<s.length(); i++) {
            rep_s[s[i]]++;
            rep_t[t[i]]++;
            if (rep_s[s[i]] == 1)
                unique_letters += s[i];
        }
        for (char c: unique_letters) {
            if (rep_s[c] != rep_t[c])
                cout << "false";
        }
    } else cout << "false";

    return 0;
}