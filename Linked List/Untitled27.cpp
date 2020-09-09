/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) 
{
    if(A==NULL)
        return 1;
    if(A->next==NULL)
        return 1;
    //ListNode *prev=NULL,*curr=A,*next;
    ListNode *curr=A;
    stack<int> l;
    while(curr!=NULL)
    {
        l.push(curr->val);
        curr=curr->next;
    }
    while(A!=NULL)
    {
        if(A->val!=l.top())
            return 0;
        l.pop();
        A=A->next;
    }
    return 1;
}

