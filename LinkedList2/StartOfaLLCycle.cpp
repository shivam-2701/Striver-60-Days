ListNode *detectCycle(ListNode *head)
{
    unordered_set<ListNode *> st;
    ListNode *curr = head;
    while (curr != NULL and st.find(curr) == st.end())
    {
        // cout<<"++"<<endl;
        st.insert(curr);
        curr = curr->next;
    }
    // if(curr==NULL){
    //     cout<<"f"<<endl;
    // }
    return curr;
}