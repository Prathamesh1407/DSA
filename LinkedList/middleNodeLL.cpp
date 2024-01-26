//T.C : O(n)
//S.C : O(1)

/*

Node* middleNode(Node* head)
{
    if(head->next==NULL) return head;
    if(head->next->next==NULL) return head->next;
    Node*slow=head;
    Node* fast=slow->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

*/