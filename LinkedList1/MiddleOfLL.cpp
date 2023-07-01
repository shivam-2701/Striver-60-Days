ListNode *middleNode(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}