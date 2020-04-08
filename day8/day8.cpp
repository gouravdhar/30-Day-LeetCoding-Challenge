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
    ListNode* middleNode(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL) {
            
            slow = slow->next;
            fast = fast->next;
            if(fast != NULL) {
                fast = fast->next;
            }
        }
        return slow;
    }
};