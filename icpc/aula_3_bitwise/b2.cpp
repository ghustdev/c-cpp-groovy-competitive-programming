#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;

    for (int i=0; i<q; i++) {
        unsigned int n; cin >> n;
        cout << (~n) << "\n";
    }
    
    return 0;
}