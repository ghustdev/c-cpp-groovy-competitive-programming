#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
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
const int INF = 1e5 + 10;

vector<string> friends;
vector<int> possible_friends;
vector<vector<bool>> rep_possible_friends;
int n;

// --- Functions ---
void floyWarshall() {
    for (int k=0; k<n; k++) {
        for (int i=0; i<n; i++) {
            if (k == i) continue;
            for (int j=0; j<n; j++) {
                if (j == i || j == k) continue;

                if (friends[i][k] == 'Y' && friends[k][j] == 'Y' && friends[i][j] == 'N' && !rep_possible_friends[i][j]) {
                    possible_friends[i]++;
                    possible_friends[j]++;
                    // cout << i << " " << j << " - ";
                    rep_possible_friends[i][j] = true;
                    rep_possible_friends[j][i] = true;
                }
            }
        }
    }
}

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    // Case tests
    int t; cin >> t;
    while (t--) 
    {
        string str; cin >> str;
        n = str.size();

        friends.clear();
        possible_friends.clear();
        rep_possible_friends.clear();

        friends.push_back(str);

        for (int i=1; i<n; i++) {
            string in; cin >> in;
            friends.push_back(in);
        }

        possible_friends.assign(n, 0);
        rep_possible_friends.assign(n, vector<bool>(n, false));

        floyWarshall();

        int max = -1, pos = -1;
        for (int i=0; i<n; i++) {
            if (possible_friends[i] > max) {
                max = possible_friends[i];
                pos = i;
            }
        }

        cout << pos << " " << max << "\n";
    }

    return 0;
}