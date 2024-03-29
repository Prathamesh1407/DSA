// https://leetcode.com/problems/sort-list/description/

//  T.C : O(nlogn)
//  S.C : O(logn)

/*

    ListNode* getMiddle(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left,ListNode* right)
    {
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode* ansHead=new ListNode(-1);
        ListNode* ansTail=ansHead;
        while(left && right)
        {
            if(left->val<=right->val)
            {
                ansTail->next=new ListNode(left->val);
                ansTail=ansTail->next;
                left=left->next;
            }
            else
            {
                ansTail->next=new ListNode(right->val);
                ansTail=ansTail->next;
                right=right->next;
            }
        }
        while(left)
        {
            ansTail->next=new ListNode(left->val);
            ansTail=ansTail->next;
            left=left->next;
        }
        while(right)
        {
            ansTail->next=new ListNode(right->val);
            ansTail=ansTail->next;
            right=right->next;
        }

        return ansHead->next;
    }


    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* middle=getMiddle(head);

        ListNode* left=head,*right=middle->next;
        middle->next=NULL;

        left=sortList(left);
        right=sortList(right);

        ListNode* result=merge(left,right);

        return result;

    }

*/