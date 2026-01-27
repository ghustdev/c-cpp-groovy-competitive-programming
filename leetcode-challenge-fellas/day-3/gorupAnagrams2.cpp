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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
        unordered_map<string,vector<string>>mp;

        for(auto& s:strs){
            string x=s;
            sort(x.begin(),x.end());
            mp[x].push_back(s);
        }

        vector<vector<string>>ans;
        for(auto y:mp){
            ans.push_back(y.second);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> teste = {"eaaaaaat","tea","tan","nat"};

    vector<vector<string>> resposta = solution.groupAnagrams(teste);
    
    return 0;
}
