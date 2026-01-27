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
const int MAX = 2e5;

vector<int> out;
int friends[MAX];
int n, k, x;
int l, r;

// --- Functions ---
bool testMid(int d)
{
    out.clear();
    int cont = 0;

    for (int i = 0; (d != 0 && i <= friends[0] - d) || (d == 0 && i < friends[0] - d); i++) {
        out.push_back(i);
        cont++;
        if (cont == k) return true;
    }

    for (int i = 1; i < n; i++) {
        for (int j = friends[i-1] + d; (d != 0 && j <= friends[i] - d) || (d == 0 && j < friends[i] - d); j++) {
            out.push_back(j);
            cont++;
            if (cont == k) return true;
        }
    }

    for (int i = friends[n-1] + d; i <= x; i++) {
        out.push_back(i);
        cont++;
        if (cont == k) return true;
    }

    return false;
}

void solve()
{
    cin >> n >> k >> x;

    for (int i=0; i<n; i++) 
        cin >> friends[i];

    sort(friends, friends + n);

    l = 0, r = x;
    int mid;
    while (l < r)
    {
        mid = (l + r + 1) / 2;

        if (testMid(mid))
            l = mid;
        else
            r = mid - 1;
    }

    testMid(l);

    for (int i=0; i<k; i++) 
        cout << out[i] << " ";
}

// --- Code ---
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}