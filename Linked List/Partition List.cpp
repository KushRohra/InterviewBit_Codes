/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) 
{
    ListNode *head=A;
    int x=B;
    if(head==NULL)
        return head;
    if(head->next==NULL)
        return head;
    ListNode *l=NULL,*temp1=NULL,*temp=NULL,*g=NULL;
    while(head!=NULL)
    {
        if(head->val<x)
        {
            ListNode *t=new ListNode(head->val);
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
        else
        {
            ListNode *t=new ListNode(head->val);
            if(g==NULL)
            {
                g=t;
                temp1=t;
            }
            else
            {
                temp1->next=t;
                temp1=t;
            }
        }
        head=head->next;
    }
    if(temp!=NULL){
        temp->next=g;
        return l;
    }
    else return g;
 
}
