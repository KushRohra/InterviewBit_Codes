int Solution::longestValidParentheses(string A) 
{
    int n=A.size(), i, ans=0;
    if(n<2)
        return 0;
    vector<int> dp(n,0);
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
            continue;
        else if(A[i]==')')
        {
            if(i-1>=0 && A[i-1]=='(')
                if(i-2>=0)
                    dp[i]=dp[i-2]+2;
                else dp[i]=2;
            else if(i-1>=0 && A[i-1]==')')
            {
                int prev = i - dp[i-1] - 1;
                if(prev>=0 && A[prev]=='(')
                {
                    int x = 0;
                    if(prev-1>=0)
                        x = dp[prev-1];
                    dp[i] = dp[i-1]+x+2; 
                }
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}

