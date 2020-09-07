vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    int max=INT_MIN,i;
    queue<int> q;
    vector<int> v;
    if(B==1)
        return A;
    for(i=0;i<B;i++)
    {
        if(A[i]>max)
            max=A[i];
        q.push(A[i]);
    }
    int n=A.size(),x;
    for( ;i<n;i++)
    {
        x=q.front();
        v.push_back(max);
        q.pop();
        q.push(A[i]);
        if(x==max)
        {
            if(A[i]>max)
            {
                max=A[i];
            }
            else
            {
                max=INT_MIN;
                queue<int> q1=q;
                while(q1.empty()==false)
                {
                    if(q1.front()>max)
                        max=q1.front();
                    q1.pop();
                }
            }
        }
        else
        {
            if(A[i]>max)
            {
                max=A[i];
            }
        }
    }
    v.push_back(max);
    return v;
}

