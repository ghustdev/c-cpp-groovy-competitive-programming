// Estudar código - cai em entrevistas

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr) {}
};

// Função para mesclar k listas usando min-heap
ListNode* mergeKLists(vector<ListNode*>& lists) {
    // Comparador para o min-heap
    auto cmp = [](ListNode* a, ListNode* b) {
        return a->val > b->val; // menor valor tem mais prioridade
    };

    priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);

    // Inserir a cabeça de cada lista (se não for nula)
    for (auto node : lists) {
        if (node) pq.push(node);
    }

    ListNode dummy(0); // nó auxiliar
    ListNode* tail = &dummy;

    while (!pq.empty()) {
        ListNode* cur = pq.top();
        pq.pop();

        tail->next = cur; // anexa o nó menor
        tail = tail->next;

        if (cur->next) pq.push(cur->next); // insere o próximo da lista
    }

    return dummy.next;
}
