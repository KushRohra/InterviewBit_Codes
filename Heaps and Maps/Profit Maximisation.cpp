int Solution::solve(vector<int> &A, int B) 
{
    priority_queue<int> pq;
    int sum=0;
    for(int i=0;i<A.size();i++)
        pq.push(A[i]);
    while(B)
    {
        int x=pq.top();
        pq.pop();
        sum+=x;
        x--;
        pq.push(x);
        B--;
    }
    return sum;
}
