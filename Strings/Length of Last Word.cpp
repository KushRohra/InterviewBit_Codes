int Solution::lengthOfLastWord(const string A) 
{
    int l,i,c=0,j=0;
    l=A.length();
    for(i=l-1;i>=0;i--){
        if(int(A[i])==32)
            j++;
        else break;
    }
    for(i=l-j-1;i>=0;i--)
    {
        if(int(A[i])==32)
            break;
        else c++;
        //cout<<c<<
    }
    return c;
}

