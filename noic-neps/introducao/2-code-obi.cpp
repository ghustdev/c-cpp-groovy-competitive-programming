#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];

    int l = 0;
    int out = 0;
    while ((l + 2) < n) {
        if (v[l] == 1 && v[l+1] == 0 && v[l+2] == 0)
            out++;
        l++;
    }

    cout << out;

    return 0;
}