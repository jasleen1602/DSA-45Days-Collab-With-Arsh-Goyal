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
class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        // Write your code here.
        ListNode *ptr = head;
        int ct = 0;
        while (ptr != NULL)
        {
            ptr = ptr->next;
            ct++;
        }
        ptr = head;
        for (int i = 0; i < ct / 2; i++)
        {
            ptr = ptr->next;
        }
        ptr = reverse(ptr);
        while (head != NULL && ptr != NULL)
        {
            if (head->val != ptr->val)
                return false;
            head = head->next;
            ptr = ptr->next;
        }
        return true;
    }
};