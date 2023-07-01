ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *fast = head, *slow = head, *prev = NULL;
    int i = 0;
    while (i < n)
    {
        fast = fast->next;
        i++;
    }
    while (fast != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    if (prev == NULL)
    {
        ListNode *temp = slow;
        slow = slow->next;
        delete temp;
        return slow;
    }
    ListNode *temp = slow;
    prev->next = slow->next;
    delete slow;
    slow = NULL;
    return head;
}