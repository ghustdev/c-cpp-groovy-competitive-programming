#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {1, 2, 3};

// void permute(int l, int r) {
//     if (l == r) {
//         for (int x : nums) cout << x << " ";
//         cout << "\n";
//         return;
//     }
//     for (int i = l; i <= r; i++) {
//         swap(nums[l], nums[i]);         // escolha
//         permute(l + 1, r);        // explora
//         swap(nums[l], nums[i]);         // desfaz (backtrack)
//     }
// }

void backtrack(int n, int max_val, vector<int>& atual, int& total) {
    if (n == 0) {
        total++;
        return;
    }

    for (int i = min(n, max_val); i >= 1; i--) {
        atual.push_back(i);              
        backtrack(n - i, i, atual, total);
        atual.pop_back();              
    }
}



int main() 
{
    // permute(0, 2);

    int N;
    cin >> N;
    vector<int> atual;
    int total = 0;
    backtrack(N, N, atual, total);
    cout << total << "\n";

    return 0;
}