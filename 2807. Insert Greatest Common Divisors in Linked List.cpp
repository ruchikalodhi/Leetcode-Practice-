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
 //using two pointers (previous and current nodes)
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev = head,  *curr = head ->next;
        while(curr)
        {
            int val= __gcd(prev->val , curr ->val);
            ListNode* node = new ListNode(val);
            prev ->next = node;
            node->next = curr;
            prev = curr;
            curr  = curr ->next;       
        }
        return head;
    }
};