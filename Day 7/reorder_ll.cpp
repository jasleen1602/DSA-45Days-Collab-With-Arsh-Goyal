/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

 You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

 */
class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *prev = NULL, *curr = head, *next;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode *head)
    {
        ListNode *prev = head, *curr = head->next;
        ListNode *f = head, *s = head;
        while (f != NULL && f->next != NULL)
        {
            f = f->next->next;
            s = s->next;
        }
        ListNode *l = reverse(s);
        while (prev != s)
        {
            prev->next = l;
            l = l->next;
            prev->next->next = curr;
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
    }
};