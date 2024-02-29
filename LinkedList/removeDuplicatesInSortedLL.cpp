// T.C : O(n)
// S.C : O(1)

/*

Node* removeDuplicatesInSortedLL(Node* head)
{
    if(head==NULL) return NULL;

    Node* curr=head;

    if((curr->next!=NULL) && (curr->data==curr->next->data))
    {
        Node* next_next=curr->next->next;

        Node* NodeToBeDeleted=curr->next;
        delete(NodeToBeDeleted);
        curr->next=next_next;
    }
    else
    {
        curr=curr->next;
    }
    return head;
}


*/