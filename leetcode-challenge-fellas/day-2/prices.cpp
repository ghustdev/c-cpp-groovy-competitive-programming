#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair_i;
typedef unordered_map <ll, ll> u_map_ll;
typedef unordered_map <string, bool> u_map_str;
typedef unordered_map <char, ll> u_map_c;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 1e4, max_differ = 0, j;

        for (int i=0; i<(int) prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
                cout << "min: " << min << "\n";
            }
            j = i+1;
            if (j<(int) prices.size() && prices[j]>min && prices[j]-min>max_differ) {
                max_differ = prices[j] - min;
                cout << "diference max: " << max_differ << " - min: "<< min << "\n";
            }
        }

        return max_differ;
    }
};

int main() {
    Solution solution;

    vector<int> prices = {7,2,5,8,6,4,1,9};

    int resposta = solution.maxProfit(prices);

    cout << resposta;

    return 0;
}
