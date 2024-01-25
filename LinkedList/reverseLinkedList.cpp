// Iterative Solution
// T.C : O(n)
// S.C : O(1)
/*
Node* reverseSLL(Node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* prev=NULL,*curr=head,*forward=NULL;

    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev; //new head
}
*/

// Recursive Solution

/*
void reverse(Node* &head,Node*curr,Node*prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }

    Node* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}

Node* reverseSLL(Node*head)
{
    Node* prev=NULL,*curr=head;
    reverse(head,curr,prev);
    return head;
}
*/