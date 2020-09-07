/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) 
{
    ListNode *l1=A,*l2=B;
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    ListNode *temp,*l=NULL;
    int x;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val>l2->val)
        {
            x=l2->val;
            l2=l2->next;
        }
        else
        {
            x=l1->val;
            l1=l1->next;
        }
        ListNode *t=new ListNode(x);
        if(l==NULL)
        {
            l=t;
            temp=t;
        }
        else
        {
            temp->next=t;
            temp=t;
        }
    }
    while(l1!=NULL)
    {
        ListNode *t=new ListNode(l1->val);
        temp->next=t;
        temp=t;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        ListNode *t=new ListNode(l2->val);
        temp->next=t;
        temp=t;
        l2=l2->next;
    }
    return l;
}

