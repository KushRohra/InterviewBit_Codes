int Solution::numDecodings(string A) 
{
    int dp[A.length()+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    if(A[0]=='0')
        dp[1]=0;
    else dp[1]=1;
    for(int i=2;i<=A.length();i++)
    {
        int one=stoi(A.substr(i-1,1));
        int two=stoi(A.substr(i-2,2));
        if(one>=1)
            dp[i]+=dp[i-1];
        if(two>=10 && two<=26)
            dp[i]+=dp[i-2];
    }
    return dp[A.length()];
}

