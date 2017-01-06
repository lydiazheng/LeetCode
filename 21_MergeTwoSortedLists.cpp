//Merge two sorted linked lists and return it as a new list. 
//The new list should be made by splicing together the nodes of the first two lists.

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        /*    runtime error
        ListNode* NewList;
        if(l1 == NULL)
            return NewList = l2;
        else if (l2 == NULL)
            return NewList = l1;
        else if(l1 == NULL && l2 == NULL)
            return NULL;
        else{
            ListNode* head1 = l1;
            ListNode* head2 = l2;
            ListNode* NewHead = NewList;
            while(head1->next != NULL && head2->next != NULL){
                if(head1->val > head2->val){
                    NewHead->next = head2;
                    head2 = head2->next;
                    NewHead = NewHead->next;
                }
                else{     //head1 <= head2
                    NewHead->next = head1;
                    head1 = head1->next;
                    NewHead = NewHead->next;
                }
            }
            if(head1->next == NULL){
                NewHead->next = head2;
            }
            else if(head2->next == NULL){
                NewHead->next = head1;
            }
        }
        return NewList;
        */
        
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
            
        if(l1->val < l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else{ //l1 >= l2
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};