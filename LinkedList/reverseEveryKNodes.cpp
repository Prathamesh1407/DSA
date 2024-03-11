
// https://leetcode.com/problems/reverse-nodes-in-k-group/


// T.C : O(n)
// S.C : O(n)

/*

int getLen(ListNode* & head){
        ListNode* temp=head;
        int len = 0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

Node* reverseK(Node* head,int k)
{
    if(head==NULL) return NULL;
    int len = getLen(head);
    if(k > len)
    {
        return head;
    }
    Node* prev=NULL,curr=head,forward=NULL;
    int c=0;

    //Reverse first K nodes
    while(curr!=NULL && c<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        c++;
    }

    if(forward!=NULL)
    {
        head->next=reverseK(forward,k);
    }

    return prev;
}

*/