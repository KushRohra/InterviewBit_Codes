int Solution::longestConsecutive(const vector<int> &A) 
{
    if(A.size()<=1)
        return A.size();
    unordered_set<int> s;
    for(int i=0;i<A.size();i++)  
        s.insert(A[i]);
    int max=INT_MIN;
    for(auto it=s.begin();it!=s.end();it++)
    {
        int c1=0, c2=0, n=*it, temp=*it;
        while(s.find(temp-1)!=s.end())
        {
            c1++;
            s.erase(temp-1);
            temp-=1;
        }
        while(s.find(n+1)!=s.end())
        {
            c2++;
            s.erase(n+1);
            n+=1;
        }
        int total=c1+c2+1;
        if(total>max)
            max=total;
    }
    return max;
}

