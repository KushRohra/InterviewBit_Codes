/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) 
{
    RandomListNode *h=A, *new_head;
    if(A==NULL)
        return NULL;
    int f=0;
    while(h!=NULL)
    {
        RandomListNode *p=new RandomListNode(h->label);
        if(f==0)
        {
            new_head=p;
            f=1;
        }
        p->next=h->next;
        h->next=p;
        h=p->next;
    }
    h=A;
    while(h)
    {
        if(h->random!=NULL)
            h->next->random=h->random->next;
        else h->next->random=NULL;
        h=h->next->next;
    }
    h=A;
    while(h)
    {
        if(h->next->next==NULL)
        {
            h->next=NULL;
        }
        else
        {
            RandomListNode *temp=h->next->next;
            h->next->next=temp->next;
            h->next=temp;
        }
        h=h->next;
    }
    return new_head;
}

