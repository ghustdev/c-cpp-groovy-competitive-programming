#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        stack<char> pilha;
        string str;
        // cin >> str;
        getline(cin, str);
        bool yes = true;
        if (str.empty()) {
            cout << "Yes\n";
            continue;
        }
        if ((int)str.length() == 1) {
            yes = false;   
        } else {
            for (int j = 0; j < (int)str.length(); j++) {
                if (str[j] == '(' || str[j] == '[') {
                    pilha.push(str[j]);
                    continue;
                }
                if (str[j] == ')' || str[j] == ']') {
                    if (pilha.empty()) {yes = false; break;}

                    if ((pilha.top() == '(' && str[j] == ')') || (pilha.top() == '[' && str[j] == ']')) {
                        pilha.pop();
                    } else {yes = false; break;}
                }
            }
        }
        if (!pilha.empty()) 
            yes = false;
        yes ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}