/*
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head,*prev=NULL,*nxt=NULL;
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    ListNode* getMiddle(ListNode* head)
    {
        ListNode* slow=head,*fast=head->next,*prev=NULL;
        while(fast)
        {
            prev=slow;
            fast=fast->next;
            if(fast)
            {
                fast=fast->next;
            }
            slow=slow->next;
        }
        return prev;
    }
    void merge(ListNode* h1,ListNode* h2)
    {

    }
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* h1=head;
        ListNode* middle=getMiddle(h1);
        ListNode*h2=middle->next;
        h2=reverse(h2);
        merge(h1,h2);
    }
*/