#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<pair<int, int>> v_pair_i;
typedef unordered_map <ll, ll> u_map_ll;
typedef unordered_map <string, bool> u_map_str;
typedef unordered_map <char, ll> u_map_c;

struct ListNode {
    int val;             // guarda um número
    ListNode* next;      // ponteiro para o próximo "nó" da lista
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:

    // Aula -> https://chatgpt.com/c/68c0e49e-2150-8323-a784-6cdbcb870cf1

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next; // guarda o próximo
            curr->next = prev;           // inverte o ponteiro
            prev = curr;                 // avança prev
            curr = next;                 // avança curr
        }

        return prev; // novo head
    }
};

int main() {
    Solution solution;

    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);

    n1->next = n2;
    n2->next = n3;

    ListNode* resposta = solution.reverseList(n1);

    // Percorre a lista invertida
    ListNode* temp = resposta;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;  // anda para o próximo
    }

    return 0;
}
