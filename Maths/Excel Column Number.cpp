int Solution::titleToNumber(string A) 
{
    int p,x,i,sum=0,l=A.length();
    for(i=0;i<l;i++)
    {
        p=int(A[i])-int('A')+1;
        x=pow(26,l-i-1)*p;
        sum+=x;
    }
    return sum;;
}

