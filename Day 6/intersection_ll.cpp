class Solution
{
public:
    int length(ListNode *head)
    {
        int ct = 0;
        while (head)
        {
            ct++;
            head = head->next;
        }
        return ct;
    }

    ListNode *getIntersectionNode(ListNode *f, ListNode *s)
    {
        if (f == NULL || s == NULL)
            return NULL;
        ListNode *p;
        ListNode *q;
        if (length(f) > length(s))
        {
            p = f;
            q = s;
        }
        else if (length(f) <= length(s))
        {
            p = s;
            q = f;
        }
        int ct = abs(length(f) - length(s));
        for (int i = 0; i < ct; i++)
            p = p->next;
        while (p != NULL && p != q)
        {
            p = p->next;
            q = q->next;
        }
        if (p == NULL)
            return NULL;
        return p;
    }
};