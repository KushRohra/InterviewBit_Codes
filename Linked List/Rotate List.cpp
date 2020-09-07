int getcount(ListNode *A)
{
    int c=0;
    while(A!=NULL)
    {
        A=A->next;
        c++;
    }
    return c;
}
ListNode* Solution::rotateRight(ListNode* A, int B) 
{
    int i=0,x=getcount(A),p1;
    if(x==1)
        return A;
    p1=B%x;
    if(p1==0)
        return A;
    p1=x-p1;
    //cout<<p1<<" ";
    ListNode *p=A,*prev=A;
    while(i!=p1)
    {
        p=p->next;
        if(i!=0)
        {
            prev=prev->next;
        }
        i++;
    }
    prev->next=NULL;
    prev=A;
    A=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=prev;
    return A;
}
