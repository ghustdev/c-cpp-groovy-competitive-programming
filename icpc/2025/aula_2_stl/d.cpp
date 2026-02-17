#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q, i, count = 0;
    cin >> q;
    int MAX = 1e6 + 1;
    vector<int> freq(MAX, 0);

    for (i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if (type == 1) {
            int x; cin >> x;
            if (freq[x] == 0) 
                count++;
            freq[x]++;
        } else if (type == 2) {
            int x; cin >> x;
            freq[x]--;
            if (freq[x] == 0) 
                count--;
        } else {
            cout << count << "\n";
        }
    }

    return 0;
}