int Solution::divide(int dividend, int divisor) 
{
    bool f1 = dividend>0;
    bool f2 = divisor>0;
    int x=abs(dividend), y=abs(divisor), c=0, temp;
    if(x==y)
    {
        if(f1^f2)
            return -1;
        else return 1;
    }
    if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;
    if(divisor==1)
        return dividend;
    //cout<<"about ";
    //cout<<x<<" "<<y<<" ";
    while(x-y>=0)
    {
        int a=0;
        while(x-(y<<1<<a)>=0)
            a++;
        //cout<<a<<" ";
        c+=1<<a;
        //cout<<c<<" ";
        x-=y<<a;
    }
    if(f1^f2)
        c=-c;
    return c;
}

