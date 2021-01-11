int Solution::solve(vector<int> &A, int B) 
{
    int count = 0, ans = 0, start = 0;
    for(int end = 0; end < A.size(); end++)
    {
        if(A[end]==0)
            count+=1;
        while(count>B)
        {
            if(A[start]==0)
                count-=1;
            start++;
        }
        ans = max(ans, end-start+1);
    }
    return ans;
}

