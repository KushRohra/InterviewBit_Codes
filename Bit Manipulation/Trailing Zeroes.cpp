int Solution::solve(int A) 
{
    int c=0, i=0;
    while(1)
    {
        if(!(A & (1<<i)))
            c++;
        else break;
        i++;
    }
    return c;
}

