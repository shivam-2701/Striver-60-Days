ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *a = headA, *b = headB;
    while (a != b)
    {
        a = a == NULL ? headB : a->next;
        b = b == NULL ? headA : b->next;

        // it works because shifting the a and b to head the of other ll reduces the
        //    it works because shifting the a and b to head the of other list reduces the difference                   between the list making so they collide after moving some steps simultaneously.
        //              * Even if they don't intersect both the a and b will reach NULL and end;
    }
    return a;
}