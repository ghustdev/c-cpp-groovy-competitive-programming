#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

void print_binary(int x);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    print_binary(2);

    return 0;
}

void print_binary(int x) {
    if (x == 0) {
        cout << "0";
        return;
    }
    bool started = false;
    for (int i = 31; i >= 0; i--) { // assume int de 32 bits
        if (x & (1 << i)) {
            cout << "1";
            started = true;
        } else if (started) {
            cout << "0";
        }
    }
}