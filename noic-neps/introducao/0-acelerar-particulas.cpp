    #include <bits/stdc++.h>

    using namespace std;

    int main () {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int d; cin >> d;

        int loop = d - 3;

        if (loop % 8 == 3) cout << 1;
        if (loop % 8 == 4) cout << 2;
        if (loop % 8 == 5) cout << 3;

        return 0;
    }