ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *lans = NULL, *lt = lans;
    int carry = 0;
    ListNode *t1 = l1, *t2 = l2;
    while (l1 != NULL && l2 != NULL)
    {
        int currVal = l1->val + l2->val + carry;
        carry = currVal / 10;
        currVal %= 10;
        if (lans == NULL)
        {
            lans = new ListNode(currVal);
            lt = lans;
        }
        else
        {
            lt->next = new ListNode(currVal);
            lt = lt->next;
        }

        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1 != NULL)
    {
        int currVal = l1->val + carry;
        carry = currVal / 10;
        currVal %= 10;
        if (lans == NULL)
        {
            lans = new ListNode(currVal);
            lt = lans;
        }
        else
        {
            lt->next = new ListNode(currVal);
            lt = lt->next;
        }

        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        int currVal = l2->val + carry;
        carry = currVal / 10;
        currVal %= 10;
        if (lans == NULL)
        {
            lans = new ListNode(currVal);
            lt = lans;
        }
        else
        {
            lt->next = new ListNode(currVal);
            lt = lt->next;
        }

        l2 = l2->next;
    }
    if (carry != 0)
    {
        lt->next = new ListNode(carry);
    }
    return lans;
}