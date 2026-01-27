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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> out(n,1);

        int prefix = 1;
        for (int i=0; i<n; i++) {
            out[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i=n-1; i>n; i--) {
            out[i] *= suffix;
            suffix *= nums[i];
        }

        return out;     
    }
};

int main() {
    Solution solution;
    vector<int> teste = {-1,1,0,-3,3};

    vector<int> resposta = solution.productExceptSelf(teste);

    for (int i=0; i<(int) resposta.size(); i++)
        cout << resposta[i] << " ";
    
    return 0;
}
