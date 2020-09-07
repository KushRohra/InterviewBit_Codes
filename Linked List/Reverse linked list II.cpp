/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *rev(ListNode *head)
{
    ListNode *prev=NULL, *curr=head, *next;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) 
{
    ListNode *head=A;
    int m=B, n=C;
    if(m==n)
        return head;
    if(m!=1)
    {
        int x=m;
        m--;
        ListNode *h=head;
        while(m!=1)
        {
            h=h->next;
            m--;
        }
        ListNode *start=h->next;
        h->next=NULL;
        ListNode *temp=start;
        int y=n;
        n-=x;
        while(n--)
            temp=temp->next;
        ListNode *end=temp;
        temp=end->next;
        end->next=NULL;
        start=rev(start);
        y-=x;
        ListNode *p=start;
        while(y--)
            p=p->next;
        h->next=start;
        p->next=temp;
        return head;
    }
    else
    {
        ListNode *end=head, *start=head;
        int x=m;
        x-=n; x=-x;
        while(x--)
            end=end->next;
        ListNode *temp=end->next;
        end->next=NULL;
        start=rev(start);
        head=start;
        m-=n; m=-m;
        ListNode *t=start;
        while(m--)
            t=t->next;
        t->next=temp;
        return head;
    }
    return head;
}

