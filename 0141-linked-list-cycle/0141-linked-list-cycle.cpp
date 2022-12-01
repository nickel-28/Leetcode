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
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if(head == NULL) return false;
        
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow= slow->next;
            fast = fast->next->next;
            if(fast==slow) return true;
        }
        
        return false;
    }
    
};