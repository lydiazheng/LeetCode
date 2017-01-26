/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
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
    ListNode* deleteDuplicates(ListNode* head) {
        //my soluiton
        if(head == NULL || head->next == NULL) return head;
        ListNode* res = head;
        while(res->next != NULL){
            if(res->val == res->next->val)  res->next = res->next->next;
            else res = res->next;
        }
        return head;
    }
};