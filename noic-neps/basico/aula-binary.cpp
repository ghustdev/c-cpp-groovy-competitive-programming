#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

string binary_convert(int x, string binary);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string binary;
    int n; cin >> n;

    cout << binary_convert(n, binary);

    return 0;
}

string binary_convert(int x, string binary) {
    if (x == 0) return binary='0';
    binary = to_string(x % 2) + binary;
    return binary_convert((x / 2), binary);
}