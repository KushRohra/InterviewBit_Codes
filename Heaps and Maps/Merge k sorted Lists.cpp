/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    multiset<int> s;
    int i,j;
    for(i=0;i<A.size();i++)
    {
        ListNode *curr = A[i];
        while(curr!=NULL)
        {
            s.insert(curr->val);
            curr=curr->next;
        }
    }
    auto it=s.begin();
    ListNode *head=NULL,*t1=NULL;
    while(it!=s.end())
    {
        ListNode *t=new ListNode(*it);
        it++;
        if(head==NULL)
        {
            head=t;
            t1=t;
        }
        else
        {
            t1->next=t;
            t1=t;
        }
    }
    return head;
}
