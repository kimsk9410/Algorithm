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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *firstP = head, *secondP = head;
        for(int i = 0; i < n; ++i){
            firstP = firstP->next;
        }
        if(firstP == NULL) return head->next;
        while(firstP->next != NULL){
            firstP = firstP->next;
            secondP = secondP->next;
        }
        secondP->next = secondP->next->next;
        return head;
    }
};
