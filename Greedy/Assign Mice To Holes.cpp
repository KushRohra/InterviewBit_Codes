int Solution::mice(vector<int> &A, vector<int> &B) 
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    if(A.size()!=B.size())
        return -1;
    else
    {
        int max=INT_MIN;
        for(int i=0;i<A.size();i++)
        {
            int x = abs(A[i]-B[i]);
            if(x>max)
                max=x;
        }
        return max;
    }
}

