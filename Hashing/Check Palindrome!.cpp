int Solution::solve(string A) 
{
    vector<int> v(26,0);
    int i, n=A.length();
    for(i=0;i<n;i++)
        v[A[i]-'a']++;
    bool oneOdd=false;
    for(i=0;i<26;i++)
    {
        if(v[i]%2==1)
        {
            if(oneOdd)
                return false;
            else oneOdd=true;
        }
    }
    return 1;
}
