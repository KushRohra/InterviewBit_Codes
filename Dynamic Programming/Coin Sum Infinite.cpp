int Solution::coinchange2(vector<int> &A, int B)
{
    int amount=B;
    int i,j,dp[amount+1]={0}, n=A.size();
    dp[0]=1;
    for(i=0;i<n;i++)
        for(j=A[i];j<=amount;j++)
            dp[j]+=dp[j-A[i]]%1000007;
    return dp[amount]%1000007;
}

