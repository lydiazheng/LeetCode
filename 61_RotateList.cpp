/*
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
*/

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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* fast = head; ListNode* slow = head; ListNode* res = head;
        if(head == NULL || k < 0) return NULL;
        int length = 0;
        while(fast != NULL){
            fast = fast->next;
            length++;
        }
        if(k == 0 || length == 1 || k%length == 0) return head;
        fast = head;
        for(int i = 0; i < k%length; i++) fast = fast->next;

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        res = slow->next;
        slow->next = NULL;
        fast->next = head;
        return res;
    }
};