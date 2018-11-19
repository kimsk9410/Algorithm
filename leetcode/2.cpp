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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode result(0);
        ListNode* p = &result;
        int carry = 0;
        while(l1 || l2){
            int sum = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            p->next = new ListNode(sum % 10);
            p = p->next;
            carry = sum / 10;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if(carry){
            p->next = new ListNode(carry);
        }
        return result.next;
    }
};
