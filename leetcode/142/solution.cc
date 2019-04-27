/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                ListNode *p = head, *q = slow;
                while(p && q) {
                    if(p == q) {
                        return p;
                    }
                    p = p->next;
                    q = q->next;
                }
            }
        }
        return NULL;
    }
};