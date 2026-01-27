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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> nums_out;
        unordered_map<int, int> val_freq;
        priority_queue<pair<int,int>> freq_val;

        for (int i : nums) {
            val_freq[i]++;
        }

        for (auto& m : val_freq) {
            freq_val.push({m.second, m.first});
        }

        for (int i=0; i<k; i++) {
            nums_out.push_back(freq_val.top().second);
            freq_val.pop();
        } 

        return nums_out;
    }
};

int main() {
    Solution solution;
    vector<int> teste = {1,2,2,2,2,4,4,3,3,3,3,3};

    vector<int> resposta = solution.topKFrequent(teste, 2);

    for (int i=0; i<(int) resposta.size(); i++)
        cout << resposta[i] << " ";
    
    return 0;
}
