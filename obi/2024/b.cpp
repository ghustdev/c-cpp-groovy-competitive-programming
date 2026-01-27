#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base :: sync_with_stdio ( false );
    cin.tie( NULL );

    int k, n, i, j; cin >> k >> n;
    vector<char> alien_alfabet(k);
    vector<char> msg(n);
    bool valid = true, found = true;

    for (j = 0; j < k; j++) {
        cin >> alien_alfabet[j];
    } 

    for (i = 0; i < n; i++) {
        cin >> msg[i];
    }

    for (j = 0; j < n && found; j++) {
        for (i = 0; i < k; i++) {
            if (msg[j] == alien_alfabet[i]) {
                valid = true;
                found = true;}
            else {
                valid = false;
                found = false;}
        }
    }

    valid ? cout << "S" : cout << "N";
}