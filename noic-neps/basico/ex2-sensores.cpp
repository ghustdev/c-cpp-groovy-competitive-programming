#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll d; cin >> d;

    if ((d - 3) % 8 == 3) cout << 1;
    else if ((d - 3) % 8 == 4) cout << 2;
    else cout << 3;

    return 0;
}