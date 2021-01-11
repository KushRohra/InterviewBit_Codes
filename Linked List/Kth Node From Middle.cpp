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
int Solution::solve(ListNode* A, int B) 
{
    if(A->next==NULL)
    {
        if(B>=1)
            return -1;
        if(B==0)
            return A->val;
    }
    ListNode *slow=A, *fast=A;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=NULL;
    A=rev(A);
    while(B!=0 && A)
    {
        A=A->next;
        B--;
        if(B==0)
            return A->val;
    }
    if(B==0 && A!=NULL)
        return A->val;
    if(B!=0 && A==NULL)
        return -1;
    return -1;
}

