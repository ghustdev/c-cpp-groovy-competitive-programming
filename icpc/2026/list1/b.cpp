#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MAX = 2e5;

void solve()
{
    string name; cin >> name;

    int count = 0;
    vector<int> letters(26, 0);
    
    for (char l : name) {
        for (char s : name) {
            if (l == s) letters[l - 97] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] == 1) count++;
    }

    if (count % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}

int main()
{
    _;
    
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}