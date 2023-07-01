#include <bits/stdc++.h>
using namespace std;
ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *newHead = NULL;
    while (curr != NULL)
    {
        ListNode *nxt = curr->next;
        curr->next = prev;
        prev = curr;
        if (nxt == NULL)
        {
            newHead = curr;
        }
        curr = nxt;
    }
    return newHead;
}