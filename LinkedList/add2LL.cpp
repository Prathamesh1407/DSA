// T.C : O(n+m)
// S.C : O(Max(n,m))

/*
    Node* reverse(Node* head)
    {
        Node* curr=head,*prev=NULL,*nxt=NULL;
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    struct Node* solve(struct Node* reverse1, struct Node* reverse2)
    {
        int carry=0;
        struct Node* addLL=new Node(-1);
        struct Node* tail=addLL;
        while(reverse1 || reverse2 || carry!=0)
        {
            int val1=0,val2=0;
            if(reverse1!=NULL) val1=reverse1->data;
            if(reverse2!=NULL) val2=reverse2->data;
            int sum=carry+val1+val2;
            carry=sum/10;
            int digit=sum%10;
            struct Node* temp=new Node(digit);
            tail->next=temp;
            tail=temp;
            if(reverse1) reverse1=reverse1->next;
            if(reverse2) reverse2=reverse2->next;
        }
        return addLL->next;
    }


    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node* reverse1=reverse(first);
        struct Node* reverse2=reverse(second);
        struct Node* addedLL=solve(reverse1,reverse2);
        return reverse(addedLL);
    }
*/