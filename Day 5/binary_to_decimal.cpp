//Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

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
    int getDecimalValue(ListNode* head) {
        int sum = 0, ct=0;
        ListNode* curr = head;
        while(curr!=NULL){
            curr=curr->next;
            ct++;
        }
        while(head!=NULL){
            sum += head->val * pow(2,ct-1); 
            head = head->next;
            ct--;
        }
        return sum;
    }
};