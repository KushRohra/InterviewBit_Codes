string Solution::countAndSay(int A) 
{
    if(A==1)
        return "1";
    if(A==2)
        return "11";
    string ans="11", res="";
    for(int i=3;i<=A;i++)
    {
        int j=0, p;
        while(j<ans.size())
        {
            int x=ans[j], c=0;
            while(x==ans[j])
            {
                c++;
                j++;
            }
            res+=to_string(c);
            res+=(x);
        }
        ans=res;
        res="";
    }
    return ans;
}

