int Solution::canJump(vector<int> &A) 
{
    vector<int> nums=A;
    int m=0,j,i,n=nums.size();
    if(n==0 || n==1)
        return 1;
    for(i=0;i<n-1;i++)
    {
        if(m>=i)
        {
            m=max(i+nums[i], m);
            if(m>=n-1)
              return true;
        }
       else break;
    }
    if(m>=n-1)
        return true;
    return false;
}

