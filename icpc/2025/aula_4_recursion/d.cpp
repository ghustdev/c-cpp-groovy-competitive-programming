#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair_i;
typedef unordered_map <ll, ll> u_map_ll;
typedef unordered_map <string, bool> u_map_str;
typedef unordered_map <char, ll> u_map_c;

void permutation(); 

string v;  
string permu;
u_map_str rep_permutation;
u_map_c rep_letter;
vector<char> rep_letter_char;
vector<bool> chosen;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> v;

    sort(v.begin(), v.end());

    chosen.assign(v.size(), false);

    for (char letter: v) {
        rep_letter[letter]++;
        if (rep_letter[letter] == 2)
            rep_letter_char.push_back(letter);
    }

    ll fat_v = 1;
    for (ll i=1; i<=(int) v.length(); i++) {
        fat_v *= i;
    }
    
    ll fat_repetions = 1, fat;
    if ((int) rep_letter_char.size() > 0) {
        for (int i=0; i<(int) rep_letter_char.size(); i++) {
            fat = 1;
            for (int j=1; j<=rep_letter[rep_letter_char[i]]; j++) {
                fat *= j;
            }
            fat_repetions *= fat;
        }
    }

    cout << (fat_v / fat_repetions) << "\n";
    
    permutation();

    return 0;
}

void permutation() {
    if ((int) permu.length() == (int) v.length()) {
        if (!rep_permutation[permu]) {
            rep_permutation[permu] = true;
            cout << permu << "\n";
        }

    } else {
        for (int i=0; i<(int) v.length(); i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permu.push_back(v[i]);
            permutation();
            chosen[i] = false;
            permu.pop_back();
        }
    }
}