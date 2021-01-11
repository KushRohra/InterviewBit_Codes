int Solution::solve(string A, string B) 
{
    string text1=A, text2=B;
    int n1=text1.size(), n2=text2.size(), i, j;
    //cout<<n1<<" "<<n2<<endl;
    int dp[n1+1][n2+1];
    for(i=0;i<n1+1;i++)
    {
        for(j=0;j<n2+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
    }
    return dp[n1][n2];
}

