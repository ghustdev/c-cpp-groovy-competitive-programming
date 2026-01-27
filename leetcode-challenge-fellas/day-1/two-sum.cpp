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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        // Soluçao log(n)
        for (int i = 0; i < (int) nums.size(); i++) {
            int complemento = target - nums[i];
            
            if (mp.find(complemento) != mp.end()) {
                return {mp[complemento], i};
            }
            
            mp[nums[i]] = i;
        }
        
        return {-1, -1};
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3};
    int target = 5;

    vector<int> resposta = solution.twoSum(nums, target);

    cout << "Indices: " << resposta[0] << " " << resposta[1] << endl;
    cout << "Valores: " << nums[resposta[0]] << " + " << nums[resposta[1]] << " = " << target << endl;

    return 0;
}
