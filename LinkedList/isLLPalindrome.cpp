// Approach 1
// Copy the data of LL in vector and apply the logic of string palindrome
// T.C : O(n)+O(n/2) = O(n)
// S.C : O(n)
/*

bool solve(vector<int>v)
    {
        int s=0,e=v.size()-1;
        while(s<=e)
        {
            if(v[s]!=v[e]) return 0;
            s++; e--;
        }
        return 1;
    }

    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int>v;
        Node* curr=head;
        while(curr!=NULL)
        {
            v.push_back(curr->data);
            curr=curr->next;
        }
        return solve(v);
    }

*/

// Approach 2
// Find Middle of LL Reverse the LL from middle->next and compare both halves
// T.C : O(n)
// S.C : O(1)

/*

    Node* getMiddle(Node* head)
    {
        Node* slow=head;
        Node* fast=head->next;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
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


    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* middle=getMiddle(head);
        Node* toBeReveresedNode=middle->next;
        middle->next=reverse(toBeReveresedNode);

        Node* head1=head,*head2=middle->next;
        while(head2)
        {
            if(head1->data!=head2->data) return 0;
            head1=head1->next;
            head2=head2->next;
        }
        return 1;
    }
*/