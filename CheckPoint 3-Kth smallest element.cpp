int Solution::kthsmallest(const vector<int> &A, int B) 
{
    priority_queue<int> pq;
    for(int i=0;i<A.size();i++)
    {
        if(pq.size()<B)
            pq.push(A[i]);
        else 
        {
            if(pq.top()<=A[i])
            {
                pq.pop();
                pq.push(A[i]);
            }
        }
    }/*
    while(pq.size()>1)
        pq.pop();*/
    return pq.top();
}

