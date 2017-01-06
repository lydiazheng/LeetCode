//Given a linked list, determine if it has a cycle in it.


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
        if(head == NULL){
            return false;
        }
        
        while(fast != NULL && fast->next != NULL){  //fast == NULL, we have traversed the whole linked list without circle
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }

        return false;
    }
};