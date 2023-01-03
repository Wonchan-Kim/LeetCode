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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* point = dummy;
        while(head){
            if(head->next != NULL && head->next->val == head->val){
                while(head->next != NULL && head->val == head->next->val){
                    head = head->next;
                }
                point->next = head->next;
            }
            else
                point = point -> next;
            
            head = head -> next;
        }
        return dummy -> next;
    }
};