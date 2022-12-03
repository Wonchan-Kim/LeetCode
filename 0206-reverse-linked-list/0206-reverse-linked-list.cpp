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
    ListNode* reverseList(ListNode* head) {
        ListNode* reserve(0);
        ListNode* temp;
       while(head)
           {
           temp = reserve;
           reserve = head;
           head = head->next;
           reserve->next = temp;
       }
       return reserve;
    }
};