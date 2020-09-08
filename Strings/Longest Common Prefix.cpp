string Solution::longestCommonPrefix(vector<string> &A) 
{
    string ans="";
    if(A.size()==0)
        return ans;
    int i,min_len=INT_MAX;
    for(i=0;i<A.size();i++)
        if(min_len>A[i].length())
            min_len=A[i].length();
    //cout<<min_len;
    for(i=0;i<min_len;i++)
    {
        char x=A[0][i];
        for(int j=1;j<A.size();j++)
        {
            if(A[j][i]!=x)
                return ans;
        }
        ans+=x;
    }
    return ans;
}

