ListNode *rev1(ListNode *head, ListNode *prev)
{
    if(head==NULL)
        return prev;
    ListNode *head1=head->next;
    head->next=prev;
    prev=head;
    prev=rev1(head1, prev);
    return prev;
}
ListNode* Solution::reverseList(ListNode* A) 
{
    ListNode *prev=NULL;
    return rev1(A,prev);
}

