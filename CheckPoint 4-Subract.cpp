ListNode *getmiddle(ListNode *head)
{
    ListNode *fast=head, *slow=head, *prev=NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    return slow;
}
ListNode *rev(ListNode *head)
{
    ListNode *prev=NULL, *next=NULL, *curr=head;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
ListNode* Solution::subtract(ListNode* A) 
{
    ListNode *head=A;
    if(head->next==NULL)
        return head;
    ListNode *mid;
    mid=getmiddle(head);
    mid=rev(mid);
    ListNode *temp=mid, *h=head;
    while(h->next)
    {
        h->val=mid->val-h->val;
        h=h->next;
        mid=mid->next;
    }
    h->val=mid->val-h->val;
    temp=rev(temp);
    h->next=temp;
    return head;
}
