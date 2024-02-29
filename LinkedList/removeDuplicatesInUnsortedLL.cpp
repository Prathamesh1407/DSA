//https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331

// T.C : O(n)
// S.C : O(n)

/*

Node *removeDuplicatesInUnsortedLL(Node *head)
{
    unordered_map<int,bool>m;
    Node* curr=head,*q=head,*p=NULL;
    while(curr!=NULL)
    {
        if(m[curr->data]==true)
        {
            q->next=curr->next;
            p=curr;
            curr=curr->next;
            delete(p);
        }
        else
        {
            m[curr->data]=true;
            q=curr;
            curr=curr->next;
        }
    }
    return head;
}


*/