/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        ListNode* b = head;  
        ListNode* a = head;  
        ListNode* prev = nullptr;

        while (a && a->next) {
            prev = b;
            b = b->next;
            a = a->next->next;
        }

        prev->next = b->next;
        delete b;

        return head;
    }
};
