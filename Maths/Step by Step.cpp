int Solution::solve(int dest) 
{
    dest=abs(dest);
    int sum=0, c=0;
    while(sum<dest || (sum-dest)%2!=0)
    {
        c++;
        sum+=c;
    }
    return c;
}

