/*
Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5

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
    ListNode* removeElements(ListNode* head, int val) {
        //my solution
        if(head == NULL || (head != NULL && head->next == NULL && head->val == val) ) return NULL;
        ListNode* move = head;
        while(move->next != NULL){
            if(move->next->val == val) move->next = move->next->next;
            else move = move->next;
        }
        if(head->val==val) return head->next;
        return head;
    }
};