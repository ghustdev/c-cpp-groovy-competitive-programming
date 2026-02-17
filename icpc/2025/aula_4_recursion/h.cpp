#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

void back_queen(int y);

#define TAM 8

v_i cols(TAM); v_i dig1(TAM*2-1); v_i dig2(TAM*2-1); 
int mat_aux[TAM][TAM];
pair<int, int> input_pos;
ll count_q = 0;
int n = TAM;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            char x; cin >> x;
            if (x == '*') {
                mat_aux[i][j] = 1;
            } else {
                mat_aux[i][j] = 0;
            }
        }
    }

    back_queen(0);

    cout << count_q;

    return 0;
}

void back_queen(int y) {
    if (y==n) {
        count_q++;
        return;
    }
    for (int x=0; x<n; x++) {
        if (cols[x] || dig1[x+y] || dig2[x-y+n-1]) continue;
        if (mat_aux[y][x]) continue;
        cols[x] = dig1[x+y] = dig2[x-y+n-1] = 1;
        back_queen(y+1);
        cols[x] = dig1[x+y] = dig2[x-y+n-1] = 0;
    }
}