int Solution::sqrt(int A) 
{
    long long int m,l=1,h=A-1;
    if(A==0)
        return 0;
    if(A<4)
        return 1;
    while(l<=h)
    {
        m=l+((h-l)/2);
       if(A/m==m)
        {
           return m;
        }    
        else if(A/m>m && (A/(m+1))<m+1)
        {
            return m;
        }
        else if(m>A/m)
            h=m-1;
        else l=m+1;
    }
    return -1;
}

