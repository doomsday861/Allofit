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
        if(!head) return head;
        if(!head->next) return head->next;
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast)
        {
            fast = fast->next;
            if(!fast or !fast->next)
                break;
            fast = fast->next;
            slow = slow->next;
        }
        slow ->next= slow->next->next;
        return head;
    }
};