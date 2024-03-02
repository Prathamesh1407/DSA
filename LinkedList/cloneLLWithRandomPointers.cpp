//Approach 1 : map the org and clone Node 
// T.C : O(N) 
// S.C : O(N) 

/*
    Node *copyList(Node *head)
    {
        Node* cloneHead=new Node(-1);
        Node* cloneTail=cloneHead;
        
        //Make a Clone List
        Node* curr=head;
        while(curr!=NULL)
        {
            cloneTail->next=new Node(curr->data);
            cloneTail=cloneTail->next;
            curr=curr->next;
        }
        
        //Create a Mapping between org and Clone LL
        unordered_map<Node*,Node*>oldToNew;
        
        Node* orgNode=head;
        Node* cloneNode=cloneHead->next;
        while(orgNode!=NULL)
        {
            oldToNew[orgNode]=cloneNode;
            orgNode=orgNode->next;
            cloneNode=cloneNode->next;
        }
        
        //Place the Random pointers
        orgNode=head;
        cloneNode=cloneHead->next;
        
        while(orgNode!=NULL)
        {
            cloneNode->arb=oldToNew[orgNode->arb];
            orgNode=orgNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead->next;
    }
*/

//Approach 2 :  
// T.C : O(N) 
// S.C : O(1) 

/*
    void insertAtTail(Node* &cloneHead,Node* &cloneTail,int data)
    {
        Node* newNode=new Node(data);
        
        if(cloneHead==NULL)
        {
            cloneHead=cloneTail=newNode;
        }
        else
        {
            cloneTail->next=newNode;
            cloneTail=newNode;
        }
    }

    Node *copyList(Node *head)
    {
        //Create Clone of LL
        
        Node* orgNode=head;
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* nxt=NULL;
        
        while(orgNode!=NULL)
        {
            insertAtTail(cloneHead,cloneTail,orgNode->data);
            orgNode=orgNode->next;
        }

        //Change the Links of Pointers

        orgNode=head;
        Node* cloneNode=cloneHead;
        while(orgNode!=NULL)
        {
            nxt=orgNode->next;
            orgNode->next=cloneNode;
            orgNode=nxt;
            
            nxt=cloneNode->next;
            cloneNode->next=orgNode;
            cloneNode=nxt;
        }
        
        //Place the Random Pointers in the Cloned LL

        orgNode=head;
        while(orgNode!=NULL)
        {
            orgNode->next->arb=orgNode->arb?orgNode->arb->next:orgNode->arb;
            orgNode=orgNode->next->next;
        }

        //Unlink the LL

        orgNode=head;
        cloneNode=cloneHead;
        while(orgNode!=NULL)
        {
            orgNode->next=cloneNode->next;
            orgNode=orgNode->next;
            if(orgNode) cloneNode->next=orgNode->next;
            cloneNode=cloneNode->next;
        }
        
        //return head
        
        return cloneHead;
    }
*/