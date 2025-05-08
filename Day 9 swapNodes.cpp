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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current = head;
        for (int i = 1; i < k; i++) {
            current = current->next;
        }
        ListNode* a = current;
        ListNode* b = head;
        while (current->next != nullptr) {
            current = current->next;
            b = b->next;
        }
        int temp = a->val;
        a->val = b->val;
        b->val = temp;
        return head;
    }
};