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
    bool isPalindrome(string s) {
        string s_clean;
        for (int i=0; i<s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                s_clean += tolower(s[i]);
            }
        }
        int right = s_clean.length() - 1;
        int left = 0;
        cout << s_clean;
        while (left < right) {
            if (s_clean[right] != s_clean[left]) return false;
            right--;
            left++;
        }

        return true;
    }
};

int main() {
    

    return 0;
}
