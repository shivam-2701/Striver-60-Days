ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *prev = NULL, *newHead = NULL;
    while (head != NULL)
    {
        ListNode *temp = head->next;
        head->next = prev;
        prev = head;
        if (temp == NULL)
        {
            newHead = head;
        }
        head = temp;
    }
    return newHead;
}
bool isPalindrome(ListNode *head)
{
    ListNode *fast = head, *slow = head;
    while (fast->next != NULL and fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode *listHead2 = slow->next;
    slow->next = NULL;
    listHead2 = reverseList(listHead2);
    // cout<<listHead2->val<<endl;
    ListNode *listHead1 = head;

    while (listHead2 != NULL and listHead1 != NULL)
    {
        // cout<<listHead1->val<<" "<<listHead2->val<<endl;
        if (listHead1->val != listHead2->val)
        {

            return false;
        }
        listHead1 = listHead1->next;
        listHead2 = listHead2->next;
    }
    return true;
}