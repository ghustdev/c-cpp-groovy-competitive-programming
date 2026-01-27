#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, middle; cin >> a >> b;

    a > b ? middle = b : middle = a;

    cout << (middle*3 - a - b);

    return 0;
}