#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vstr;
typedef vector<char> vc;
typedef vector<float> vf;

#define MAX
#define MIN

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0, higher = 0, i = 0; cin >> n;
    int prices[n];

    for (i = 0; i < n; i++) {
        cin >> prices[i];
        prices[i] > higher ? higher = prices[i]:0;
    }

    for (i = 0; i < n; i++) {
        count += prices[i];
    }

    count -= higher/2;

    cout << count;
}