//Return true if there is a cycle in the linked list. Otherwise, return false.

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
        ListNode *fast = head, *slow = head;
        if(head==NULL||head->next==NULL)
            return false;
        do{
            fast = fast->next->next;
            slow = slow->next;
        }while(fast!=NULL&&fast->next!=NULL&&fast!=slow);
        return (slow==fast);
    }
};