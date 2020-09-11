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
    ListNode *prev=NULL, *next, *curr=head;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
ListNode* Solution::reverseList(ListNode* A, int B)
{
    ListNode *head=A;
    int k=B, f=0, i;
    vector<ListNode *> q;
    while(head)
    {
        int p=k-1;
        if(head!=NULL)
            q.push_back(head);
        while(p!=0)
        {
            p--;
            head=head->next;
        }
        ListNode *p1=head->next;
        head->next=NULL;
        head=p1;
    }
    ListNode *end=NULL;
    for(i=0;i<q.size();i++)
        q[i]=rev(q[i]);
    i=0;
    while(i<q.size())
    {
        end=q[i];
        while(end->next!=NULL)
            end=end->next;
        if(f==0)
        {
            head=q[i];
            f=1;
        }
        if(i!=q.size()-1)
            end->next=q[i+1];
        else end->next=NULL;
        i++;        
    }
    return head;
}

