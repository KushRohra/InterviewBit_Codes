int test(char x)
{
    if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        return 1;
    else return 0;
}

int Solution::solve(string A) 
{
    int n,i,sum=0;
    n=A.length();
    for(i=0;i<n;i++)
    {
        if(test(A[i])==1)
            sum+=n-i;
        sum=sum%10003;
    }
    return sum%10003;
}
