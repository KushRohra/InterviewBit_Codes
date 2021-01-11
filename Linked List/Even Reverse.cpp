ListNode* Solution::solve(ListNode* A) 
{
    int i=1;
    stack<int> s;
    ListNode *temp=A;
    while(temp)
    {
        if(i%2==0)
            s.push(temp->val);
        i++;
        temp=temp->next;
    }
    temp=A;
    i=1;
    while(temp)
    {
        if(i%2==0)
        {
            temp->val=s.top();
            s.pop();
        }
        i++;
        temp=temp->next;
    }
    return A;
}
