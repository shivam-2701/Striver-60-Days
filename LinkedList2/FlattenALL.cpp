bool cmp(Node *a, Node *b)
{
    return a->data < b->data;
}
Node *flatten(Node *root)
{
    vector<Node *> nodeList;
    Node *head = root;
    while (head != NULL)
    {
        Node *curr = head;
        while (curr != NULL)
        {
            Node *temp = curr->bottom;
            curr->bottom = NULL;
            nodeList.push_back(curr);
            curr = temp;
        }
        Node *temp = head->next;
        head->next = NULL;
        head = temp;
    }
    sort(nodeList.begin(), nodeList.end(), cmp);

    Node *newHead = NULL, *tail = NULL;
    // cout<<nodeList.size()<<endl;
    for (int i = 0; i < nodeList.size(); i++)
    {
        if (newHead == NULL)
        {
            newHead = nodeList[i];
            tail = newHead;
            tail->bottom = NULL;
        }
        else
        {
            // cout<<tail->data<<" ";
            tail->bottom = nodeList[i];
            tail = tail->bottom;
        }
    }
    tail->bottom = NULL;
    // Node* temp=newHead;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;

    return newHead;
}