/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) 
{
    if(A==NULL || A->next==NULL || A->next->next==NULL)
        return A;
    stack<ListNode * > s,s1;
    ListNode *temp,*t1,*t2,*p=A;
    while(p!=NULL)
    {
        s.push(p);
        p=p->next;
    }
    int f,t=s.size();
    f=t/2;
    while(f--)
    {
        s1.push(s.top());
        s.pop();
    }
    if(t%2==1)
    {
        p=s.top();
        p->next=NULL;
        s.pop();
        temp=p;
    }
    else
    {
        p=s1.top();
        p->next==NULL;
        temp=NULL;
    }
    while(s.empty()==false)
    {
        t1=s.top();
        t2=s1.top();
        s.pop();
        s1.pop();
        t2->next=temp;
        t1->next=t2;
        temp=t1;
    }
    return t1;
}

