void deleteNode(ListNode *node)
{
    // ListNode* nxt=node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    // delete nxt;
}
