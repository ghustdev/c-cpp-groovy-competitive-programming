#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

void hanoi(int n, int orig, int aux, int dest);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int orig = 1, aux = 2, dest = 3;

    cout << ((1<<n) - 1) << "\n";

    hanoi(n, orig, aux, dest);

    return 0;
}

void hanoi(int n, int orig, int aux, int dest) {
    if (n==1) {
        cout << orig << " " << dest << "\n";
        return;
    }
    //          1      2     3 -> inicio
    //          1      3     2 -> n=2
    //          1      2     3 -> n=1
    hanoi(n-1, orig, dest, aux);
    //          1      2     3 -> volta para o caso base (n=3)
    cout << orig << " " << dest << "\n";
    //          1      2     3 -> volta para o caso base (n=3)
    hanoi(n-1, aux, orig, dest);
}