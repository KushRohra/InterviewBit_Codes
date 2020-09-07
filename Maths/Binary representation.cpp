string Solution::findDigitsInBinary(int A) 
{
    string a="",s="";
    if(A==0)
    {
        a="0";
        return s;
    }
    if(A==1)
    {
        a="1";
        return a;
    }
    while(A!=0)
    {
        if(A%2==0)
            a="0";
        else a="1";
        s=s+a;
    }
    return s;
}

