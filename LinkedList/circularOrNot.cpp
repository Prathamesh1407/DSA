/*

bool IScircular(Node* head)
{
    if(head==NULL) return true;
    
    Node* temp=head->next;

    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    if(temp==head) return true;
    return false;
}

//2nd Approach
map<Node*,bool>m
same element 
1st hit true
2nd hit return 

*/