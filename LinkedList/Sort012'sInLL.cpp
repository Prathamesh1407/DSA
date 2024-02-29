// https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937
//  T.C : O(n)
//  S.C : O(1)

// If Data Replacement is allowed
/*
    Node* sortList(Node *head){
    // Write your code here.
    if(head==NULL || head->next==NULL) return head;
    Node* curr=head;
    int zeroCount=0,oneCount=0,twoCount=0;

    while(curr!=NULL)
    {
        if(curr->data==0) zeroCount++;
        else if(curr->data==1) oneCount++;
        else twoCount++;
        curr=curr->next;
    }
    curr=head;
    while(curr!=NULL)
    {
        if(zeroCount!=0)
        {
            curr->data=0;
            zeroCount--;
        }
        else if(oneCount!=0)
        {
            curr->data=1;
            oneCount--;
        }
        else
        {
            curr->data=2;
            twoCount--;
        }
        curr=curr->next;
    }
    return head;

}
*/

// T.C : O(n)
// S.C : O(1)

// If Data Replacement is not allowed
//  Approach-2

/*
    void insert(Node* &node,Node* temp)
    {
        node->next=temp;
        node=node->next;
    }

    Node* sortList(Node *head){
        // Write your code here.
        if(head==NULL || head->next==NULL) return head;

        Node* zeroHead=new Node(-1);
        Node* zero=zeroHead;
        Node* oneHead=new Node(-1);
        Node* one=oneHead;
        Node* twoHead=new Node(-1);
        Node* two=twoHead;

        Node* curr=head;

        while(curr!=NULL)
        {
            if(curr->data==0)
            {
                insert(zero, curr);
            }
            else if(curr->data==1)
            {
                insert(one, curr);
            }
            else
            {
                insert(two, curr);
            }
            curr=curr->next;
        }
        zero->next=oneHead->next;
        one->next=twoHead->next;
        two->next=NULL;

        return zeroHead->next;
}
*/