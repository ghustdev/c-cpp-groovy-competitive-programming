#include <bits/stdc++.h>
using namespace std;

int main() 
{
    uint32_t q, i; cin >> q;
    uint32_t n;
    vector<uint32_t> resp(q);

    for (i = 0; i < q; i++) {
        cin >> n;
        resp[i] = (uint32_t) ~(n);
    }

    for (i = 0; i < q; i++) {
        cout << resp[i] << "\n";
    }

    return 0;
}