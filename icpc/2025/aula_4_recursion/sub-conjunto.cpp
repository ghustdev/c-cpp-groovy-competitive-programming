#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair;
typedef unordered_map <ll, ll> u_map;

int v[] = {1, 2, 3};
vector<int> vv;

void sub(int i);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sub(0);

    return 0;
}

void sub(int i) {
    if (i == 3) {
        cout << "{ ";
        for (int x: vv) {
            cout << x << " ";
        }
        cout << "}" << "\n";
        return;
    } 

    sub(i+1);
    vv.push_back(v[i]);
    sub(i+1);
    vv.pop_back();
}