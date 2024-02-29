
// https://www.codingninjas.com/studio/problems/merge-two-sorted-linked-lists_800332
// T.C : O(n+m)
// S.C : O(1)
/*
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL) return second;
    if(second==NULL) return first;
    if(first == NULL && second==NULL) return NULL;

    Node<int>* curr1=first,*curr2=second,*head=new Node<int>(-1),*tail=head;

    while(first!=NULL && second!=NULL)
    {
        if(first->data<=second->data)
        {
            tail->next=first;
            tail=first;
            first=first->next;
        }
        else
        {
            tail->next=second;
            tail=second;
            second=second->next;

        }
    }

    if(first!=NULL)
    {
            tail->next=first;

    }
    if(second!=NULL)
    {
            tail->next=second;

    }
    return head->next;
}



*/
// 2nd Approach
/*

    Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)return second;
    if(second == NULL)return first;

    Node<int>* temp = first->data > second->data ? second : first;
    if(temp==first)
    temp->next = sortTwoLists(first->next,second);
    else
    temp->next = sortTwoLists(first,second->next);
    return temp;
}
*/