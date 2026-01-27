#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

// --- Vars ---
const ll INF = 1e18;
const int MAXN = 1e3 + 10;

// --- Functions ---


// --- Code ---
int main ()
{
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    
    int h, w; cin >> h >> w;
    vector<string> mat(h+1);

    for (int i=0; i<h; i++) {
        string str; cin >> str;

        mat[i] = str;
    }

    int dx[8] = {1, 1, 0, -1, -1, -1,  0,  1};
    int dy[8] = {0, 1, 1,  1,  0, -1, -1, -1};

    vpii out(5);

    bool valid = false;
    for (int i=0; i<h; i++) {   
        for (int j=0; j<w; j++) {
            if (mat[i][j] == 's' && !valid) {
                for (int pos=0; pos<8; pos++) {
                    int moveX = j + dx[pos];
                    int moveY = i + dy[pos];

                    out.clear();
                    out.push_back({i+1, j+1});

                    if (moveY >= 0 && moveY < h && moveX >= 0 && moveX < w && mat[moveY][moveX] == 'n') {
                        out.push_back({moveY+1, moveX+1});

                        char ant = 'n';
                        moveX = moveX + dx[pos];
                        moveY = moveY + dy[pos];

                        if (moveY >= 0 && moveY < h && moveX >= 0 && moveX < w && mat[moveY][moveX] == 'u' && ant == 'n') {
                            out.push_back({moveY+1, moveX+1});
                            ant = 'u';
                            moveX = moveX + dx[pos];
                            moveY = moveY + dy[pos];
                            if (moveY >= 0 && moveY < h && moveX >= 0 && moveX < w && mat[moveY][moveX] == 'k' && ant == 'u') {
                                out.push_back({moveY+1, moveX+1});
                                ant = 'k';
                                moveX = moveX + dx[pos];
                                moveY = moveY + dy[pos];
                                if (moveY >= 0 && moveY < h && moveX >= 0 && moveX < w && mat[moveY][moveX] == 'e' && ant == 'k') {
                                    out.push_back({moveY+1, moveX+1});
                                    valid = true;
                                    break;
                                }
                            }
                        }
                        else continue;
                    }
                }
            }
        }
    }

    for (int i=0; i<5; i++)     
        cout << out[i].first << " " << out[i].second << "\n";

    return 0;
}