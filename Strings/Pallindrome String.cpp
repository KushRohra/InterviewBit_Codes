bool isupper1(char a)
{
    int p=int(a);
    if(p>=65 && p<=90)
        return true;
    else return false;
}
bool ischar(char a)
{
    int p=int(a);
    if(p>=65 && p<=90)
        return true;
    if(p>=97 && p<=122)
        return true;
    return false;
}
bool isnum(char a)
{
    int p = int(a);
    if(p>=48 && p<=57)
        return true;
    else return false;
}
int Solution::isPalindrome(string A) 
{
    string s=A;
    int i,n=s.length();
    string B="";
    while(i<n)
    {
        if(ischar(s[i])==true)
        {
            if(isupper1(s[i])==true)
            {
                s[i]=char(int(s[i])+32);
                B+=s[i];
            }
            else B+=s[i];    
        }  
        else if(isnum(s[i])==true)
            B+=s[i];
        i++;
    }
    n=B.length();
    if(n==0 || n==1)
        return true;
    i=0;
    while(i<=n/2)
    {
       // cout<<B[i]<<" "<<B[n-i-1]<<endl;
        if(B[i]!=B[n-i-1])
            return false;
        i++;
    }
    return true;
}
