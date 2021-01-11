/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) 
{
    if(A==NULL || A->next==NULL)
        return A;
    ListNode *p1=A, *p2;
    while(p1 && p1->val==0)
        p1=p1->next;
    if(p1==NULL)
        return A;
    int f=0;
    p2=p1;
    while(p2)
    {
        if(p2->val==0)
        {
            f=1;
            p1->val=0;
            p1=p1->next;
        }
        p2=p2->next;
    }
    if(f==0)
        return A;
    if(!p2)
    {
        while(p1)
        {
            p1->val=1;
            p1=p1->next;
        }
    }
    return A;
}

