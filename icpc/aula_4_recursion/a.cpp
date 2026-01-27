#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vppi;

ll estranho(ll n);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;

    cout << n << " ";
    estranho(n);

    return 0;
}

ll estranho(ll n) {
    if (n==1) return 1;
    else if (n%2==0) {cout << n/2 << " "; return estranho(n/2);}
    else {cout << n*3+1 << " "; return estranho(n*3+1);}
}