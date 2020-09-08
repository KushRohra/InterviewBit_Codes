int Solution::atoi(const string A) 
{
    long long int f=0,sign=1,y,x=0,i=0,l=A.length();
    while(int(A[i])==32)
        i++;
    for( ;i<l;i++)
    {
        if(int(A[i])>=48 && int(A[i])<=57)
        {
            y=int(A[i])-int('0');
            x=x*10+y;
        }
        else if(A[i]=='-' && x==0)
            sign=-1;
        else if(A[i]=='+' && x==0)
            sign=1;
        else f=1;
        if(f==1)
            break;
        if(x>INT_MAX)
            break;
    }
    if(sign*x>INT_MAX)
        return INT_MAX;
    else if(sign*x<INT_MIN)
        return INT_MIN;
    else return sign*x;
}

