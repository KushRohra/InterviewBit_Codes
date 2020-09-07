ListNode* Solution::deleteDuplicates(ListNode* A) 
{
    if(A==NULL || A->next==NULL)
        return A;
    ListNode *dummy = new ListNode(-1);
    dummy->next=A;
    ListNode *p=dummy, *n;
    while(p->next)
    {
        n=p->next;
        while(n->next && n->val==n->next->val)
            n=n->next;
        if(p->next!=n)
            p->next=n->next;
        else p=n;
    }
    return dummy->next;
}
