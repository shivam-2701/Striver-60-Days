ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL or list2 == NULL)
    {
        return list1 == NULL ? list2 : list1;
    }
    ListNode *i = list1, *j = list2, *head = NULL, *tail = NULL;
    while (i != NULL and j != NULL)
    {
        ListNode *curr = NULL;
        if (i->val <= j->val)
        {
            curr = i;
            i = i->next;
        }
        else
        {
            curr = j;
            j = j->next;
        }
        curr->next = NULL;
        if (head == NULL)
        {
            head = curr;
            tail = curr;
        }
        else
        {
            tail->next = curr;
            tail = tail->next;
        }
    }
    tail->next = i != NULL ? i : j;
    return head;
}