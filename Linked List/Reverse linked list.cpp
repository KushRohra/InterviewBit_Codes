/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) 
{
    if(A==NULL)
        return NULL;
    if(A->next==NULL)
        return A;
    ListNode *prev=NULL,*curr=A,*next;
    while(curr!=NULL)
    {
        if(curr!=NULL)
            next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    A=prev;
    return A;
}

