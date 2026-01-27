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
    // Aula ->https://chatgpt.com/c/68c0e49e-2150-8323-a784-6cdbcb870cf1

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // nó auxiliar para simplificar
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // avança
        }

        // se sobrou alguma lista, conecta ela direto
        if (list1 != nullptr) tail->next = list1;
        if (list2 != nullptr) tail->next = list2;

        return dummy.next;
    }
};

int main() {
    Solution solution;

    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);

    n1->next = n2;
    n2->next = n3;

    ListNode* n4 = new ListNode(1);
    ListNode* n5 = new ListNode(2);
    ListNode* n6 = new ListNode(7);

    n4->next = n5;
    n5->next = n6;

    ListNode* resposta = solution.mergeTwoLists(n1, n4);

    ListNode* temp = resposta;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next; 
    }

    return 0;
}
