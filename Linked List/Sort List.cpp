/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *merge(ListNode *h1, ListNode *h2)
{
    if(h1==NULL) return h2;
    if(h2==NULL) return h1;
    if(h1->next==NULL && h2->next==NULL)
    {
        if(h1->val<=h2->val)
        {
            h1->next=h2;
            return h1;
        }
        else
        {
            h2->next=h1;
            return h2;
        }
    }
    ListNode *head, *other, *curr, *prev;
    if(h1->val<=h2->val)
    {
        head=h1; h1=h1->next; other=h2;
    }
    else
    {
        head=h2; h2=h2->next; other=h1;
    }
    curr=head->next; prev=head;
    while(curr && other)
    {
        if(curr->val<=other->val)
        {
            curr=curr->next; prev=prev->next;
        }
        else
        {
            ListNode *t=other; other=other->next;
            t->next=curr;
            prev->next=t;
            prev=prev->next;
        }
    }
    if(other==NULL) return head;
    else if(curr==NULL) { prev->next=other; return head; }
    return head;
}
ListNode *half(ListNode *head)
{
    if(head->next==NULL)
        return head;
    ListNode *slow=head, *fast=head->next;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *h1=slow, *h2=slow->next, *h11, *h22;  slow->next=NULL;
    h11=half(head); h22=half(h2);
    ListNode *h=merge(h11, h22);
    return h;
}
ListNode* Solution::sortList(ListNode* A) 
{
    if(A==NULL || A->next==NULL)
        return A;
    return half(A);
}

