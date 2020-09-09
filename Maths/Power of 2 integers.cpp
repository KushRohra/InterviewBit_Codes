int Solution::isPower(int A) 
{
    if(A==1)
        return true;
    if(A==0)
        return false;
    if(A<=3)
        return false;
    int i=2, temp;
    while(i<=sqrt(A))
    {
        temp=A;
        while(temp%i==0)
            temp/=i;
        if(temp==1)
            return true;
        i++;
    }
    return false;
}

