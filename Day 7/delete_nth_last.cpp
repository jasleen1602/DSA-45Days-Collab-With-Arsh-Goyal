class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *ptr = head;
        ListNode *ans = head;
        if (head == NULL)
            return NULL;
        for (int i = 0; i < n; i++)
        {
            ptr = ptr->next;
        }
        if (ptr == NULL)
            return head->next;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            head = head->next;
        }
        head->next = head->next->next;
        return ans;
    }
};