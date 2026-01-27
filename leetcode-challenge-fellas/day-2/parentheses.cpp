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
    bool isValid(string s) {
        stack<char> stack_f;

        for (char c: s) {
            if (c=='{') {
                stack_f.push('}');
            } else if (c=='(') {
                stack_f.push(')');
            } else if (c=='[') {
                stack_f.push(']');
            } else {
                if (!stack_f.empty()) {
                    if (stack_f.top()!=c) return false;
                    else stack_f.pop();
                } else return false;
            }
        }
        
        return stack_f.empty();
    }
};

int main() {
    Solution solution;

    string teste =  "({[()]}){}[][";

    bool resposta = solution.isValid(teste);

    cout << resposta;

    return 0;
}
