int len(ListNode *A)
{
    int l=0;
    while(A!=NULL)
    {
        l++;
        A=A->next;
    }
    return l;
}
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) 
{
    if(A==NULL || B==NULL)
        return 0;
    int la=0,lb=0,d=0;
    lb=len(B);
    la=len(A);    
    if(la>lb)
    {
        d=la-lb;
        while(d!=0)
        {
            A=A->next;
            d--;
        }
    }
    else 
    {
        d=lb-la;
        while(d!=0)
        {
            B=B->next;
            d--;
        }
    }
    while(A!=NULL || B!=NULL)
    {
        if(A==B)
            return A;
        A=A->next;
        B=B->next;
    }
    return NULL;
}
