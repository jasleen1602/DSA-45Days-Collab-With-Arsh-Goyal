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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(-1);
        ListNode *res = ans;
        int carry = 0;
        while (l1 != NULL && l2 != NULL)
        {
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans->next = new ListNode(sum);
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL)
        {
            int sum = l1->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans->next = new ListNode(sum);
            ans = ans->next;
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            int sum = l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            ans->next = new ListNode(sum);
            ans = ans->next;
            l2 = l2->next;
        }
        if (carry)
        {
            ans->next = new ListNode(carry);
        }
        return res->next;
    }
};