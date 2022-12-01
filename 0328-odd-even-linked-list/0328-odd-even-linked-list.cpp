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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *od_head = head;
        ListNode *od_tail = head;
        ListNode *ev_head = head->next;
        ListNode *ev_tail = head->next;
        
        while(od_tail->next!=NULL && ev_tail->next!=NULL) {
            od_tail->next = ev_tail->next;
            od_tail = od_tail->next;
            ev_tail->next = od_tail->next;
            ev_tail=ev_tail->next;
        }
        od_tail->next = ev_head;
        return head;
        
        
    }
};