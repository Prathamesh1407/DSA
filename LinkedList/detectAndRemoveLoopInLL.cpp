/*

//Approach 1
// T.C : O(n)
// S.C : O(n)
bool detectLoop(Node* head)
{
    if(head==NULL) return 0;
    Node* temp=head;
    map<Node*,bool>m;
    while(temp!=NULL)
    {
        if(m[temp]==true)
        {
            return 1;
        }
        m[temp]=true;
        temp=temp->next;
    }
    return false;
}

//Approach 2 : Floyd Cycle Detection Algorithm 
// T.C : O(n)
// S.C : O(1)

Node* detectLoop(Node* head)
{
    if(head==NULL) return NULL;
    Node* slow=head,*fast=head;
    while(fast!=NULL && slow!=NULL)
    {
        fast=fast->next;
        if(fast) fast=fast->next;
        slow=slow->next;
        if(slow==fast) return slow;
    }
    return NULL;
}


//Get the Starting Node of Loop

Node* StartingNode(Node* head)
{
    if(head==NULL) return NULL;
    Node* intersectionNode=detectLoop(head);
    if(intersectionNode==NULL) return NULL;
    Node* slow=head;

    while(slow != intersectionNode)
    {
        slow=slow->next;
        intersectionNode=intersectionNode->next;
    }
    return slow;
}

//Remove the Loop from Linked List

void removeLoop(Node* head)
{
    Node* startLoopNode=StartingNode(head);
    if(startLoopNode==NULL) return head;
    Node* temp=startLoopNode;

    while(temp->next!=startLoopNode)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}







*/