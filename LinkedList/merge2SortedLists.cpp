/**
 * Definition used for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *head,*fakehead;
    head=new ListNode(0);
    fakehead=new ListNode(-1);
    fakehead->next=head;
    ListNode *nptr=A,*lptr=B;
    while(nptr!=NULL&&lptr!=NULL)
    {
        if(nptr->val<lptr->val)
        {
            head->next=new ListNode(nptr->val);
            head=head->next;
            nptr=nptr->next;
        }
        else
        {
            head->next=new ListNode(lptr->val);
            head=head->next;
            lptr=lptr->next;
        }
    }
    if(nptr!=NULL)
    {
        while(nptr!=NULL)
        {
           head->next=new ListNode(nptr->val);
           head=head->next;
           nptr=nptr->next;
        }
    }
    if(lptr!=NULL)
    {
        while(lptr!=NULL)
        {
            head->next=new ListNode(lptr->val);   
            head=head->next;
            lptr=lptr->next;
        }
    }
    return fakehead->next->next;
}
