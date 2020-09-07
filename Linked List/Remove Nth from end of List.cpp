/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int getcount(ListNode *node)
{
    int c=0;
    while(node!=NULL)
    {
        c++;
        node=node->next;
    }
    return c;
}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) 
{
    int i=0,c=getcount(A);
    if(A->next==NULL)
        return NULL;
    ListNode *B1=A,*prev,*p;
    int n=c-B;
    if(n<=0)
    {
        A=A->next;
        return A;
    }
    while(i<n)
    {
        if(i<n)
        {
            prev=B1;
        }
        B1=B1->next;
        i++;
    }
    p=prev->next;
    prev->next=p->next;
    return A;
}

