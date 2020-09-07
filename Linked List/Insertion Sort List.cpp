/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) 
{
    ListNode *head=A;
    if(head==NULL || head->next==NULL)
        return head;
    ListNode *temp=head->next; head->next=NULL;
    while(temp!=NULL)
    {
        ListNode *t=head, *prev=NULL;
        while(t && t->val<=temp->val)
        {
            prev=t;
            t=t->next;
        }
        if(prev==NULL)
        {
            ListNode *p=temp;   temp=temp->next;    p->next=NULL;
            p->next=head;   head=p;
        }
        else if(t==NULL)
        {
            ListNode *p=temp;   temp=temp->next;    p->next=NULL;
            prev->next=p;
        }
        else
        {
            ListNode *p=temp;   temp=temp->next;    p->next=NULL;
            p->next=t;   prev->next=p;
        }
    }
    return head;
}

