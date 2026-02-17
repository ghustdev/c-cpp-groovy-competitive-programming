#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/* ll pot_rec(ll x, ll bac_num) {
    ll pot = 1;
    
    for (int i = 0; i <= 32; i++) {
        pot *= 2;
        if (pot > x) {
            bac_num += 1;
            if (pot / 2 == x) return bac_num;
            return pot_rec(x - (pot / 2), bac_num);
        }
        if (pot == x) {
            bac_num++;
            return bac_num;
        }
    }
    return bac_num;
} */

int main() 
{
    ll x; cin >> x;
    ll bac_num = 0;
    ll dois = 1;
    for(int i=1; i<=32; i++) dois *= 2;
    for(int i=32; i>=0; i--){
        if(dois <= x){
            bac_num++;
            x -= dois;
        }
        dois >>= 1;
    }
    // ll resp = pot_rec(x, bac_num);
    cout << bac_num;

    return 0;
}