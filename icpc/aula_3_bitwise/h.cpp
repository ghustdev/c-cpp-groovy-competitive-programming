#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum_upto(ll b) {
    ll sum = 0;
    for (int i = 0; (1LL << i) <= b; i++) {
        ll cycle = 1LL << (i + 1);
        ll total_blocks = (b + 1) / cycle;
        ll ones_in_blocks = total_blocks * (1LL << i);
        ll remainder = (b + 1) % cycle;
        ll ones_in_remainder = max(0LL, remainder - (1LL << i));
        sum += (ones_in_blocks + ones_in_remainder) * (1LL << i);
    }
    return sum;
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll ans = sum_upto(b) - sum_upto(a - 1);
    cout << ans << "\n";
}
