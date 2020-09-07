/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A)
{
    int f=0;
    if(A->next==NULL || A==NULL)
        return A;
    ListNode *curr=A, *n1=A->next, *n2=n1->next;
    while(curr && n1)
    {
        n1->next=curr;
        if(n2 && !n2->next)
            curr->next=n2;
        else if(n2)
            curr->next=n2->next;
        else curr->next=NULL;
        if(f==0)
        {
            f=1;
            A=n1;
        }
        curr=n2;
        if(!curr)
            break;
        if(n2)
            n1=n2->next;
        if(!n1)
            break;
        if(n1)
            n2=n1->next;
    }
    return A;
}

