pair<ListNode *, ListNode *> reverseList(ListNode *node, int n)
{
    int i = 1;
    ListNode *head = node, *prev = NULL, *tail = NULL;
    while (head != NULL and i <= n)
    {
        if (tail == NULL)
        {
            tail = head;
        }
        ListNode *temp = head->next;
        head->next = prev;
        prev = head;
        if (i < n)
            head = temp;
        i++;
    }
    return (make_pair(head, tail));
}
ListNode *reverseKGroup(ListNode *head, int n)
{
    if (head == NULL)
    {
        return head;
    }
    ListNode *curr = head, *currT = head, *nhead = NULL, *ptail = NULL;
    while (currT != NULL and currT->next != NULL)
    {
        int i = 1;
        while (currT->next != NULL and i < n)
        {
            currT = currT->next;
            i++;
        }
        if (i != n)
        {
            break;
        }
        ListNode *temp = currT->next;
        pair<ListNode *, ListNode *> nNode = reverseList(curr, n);
        if (nhead == NULL)
        {
            nhead = nNode.first;
            ptail = nNode.second;
        }
        else
        {
            ptail->next = nNode.first;
        }
        nNode.second->next = temp;
        ptail = nNode.second;
        curr = temp, currT = temp;
    }
    return nhead == NULL ? head : nhead;
}