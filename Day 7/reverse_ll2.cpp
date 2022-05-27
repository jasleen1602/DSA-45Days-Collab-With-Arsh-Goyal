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

//Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {

        if (head == NULL || head->next == NULL || left == right)
            return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *ans = dummy;
        ListNode *prev = NULL;

        for (int i = 1; i <= left; i++)
        {
            prev = dummy;
            dummy = dummy->next;
        }

        ListNode *curr = dummy;
        ListNode *next;
        ListNode *prevR = prev;

        for (int i = left; i <= right; i++)
        {
            next = curr->next;
            curr->next = prevR;
            prevR = curr;
            curr = next;
        }

        prev->next = prevR;
        dummy->next = curr;

        return ans->next;
    }
};