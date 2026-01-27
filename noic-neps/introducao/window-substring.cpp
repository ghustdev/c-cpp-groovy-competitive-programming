#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    string t; cin >> t;

    int l = 0, r = 0;
    int min_s = INT32_MAX;
    string aux_t = t;
    string aux;
    string out = "";

    while (r < s.length()) {
        if (binary_search(aux_t.begin(), aux_t.end(), s[r])) {
            int pos = aux_t.find(s[r]);
            aux_t.replace(pos, aux_t.length(), "");
        }
    }

    return 0;
}