//Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        ListNode* cur = head, *prev = NULL;
        while(cur!=NULL){
            while(cur!=NULL&&cur->val == val){
                if(prev == NULL){
                    head = cur->next;
                    cur=head;
                }
                else{
                    prev->next = cur->next;
                    cur = cur->next;
                }
            }
            prev = cur;
            if(cur!=NULL)
                cur = cur->next;
        }
        return head;
    }
};