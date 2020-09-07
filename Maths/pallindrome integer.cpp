int Solution::isPalindrome(int A) 
{
    int  i;
    if(A<0)
        return 0;
    vector<int> v;
    while(A!=0)
    {
        v.push_back(A%10);
        A=A/10;
    }
    int n=v.size();
    for(i=0;i<n/2;i++)
    {
        if(v[i]!=v[n-i-1])
            return 0;
    }
    return 1;
}

