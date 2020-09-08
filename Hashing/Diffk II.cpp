int Solution::diffPossible(const vector<int> &A, int B) 
{
    int n=A.size(),x,k=B;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
        m[A[i]]++;
    auto i=m.begin();
    while(i!=m.end())
    {
        x=i->first-B;
        if(m.find(x)!=m.end())
        {
            if(m.find(x)!=i)
                return 1;
            else if(i->second>1)
                return 1;
        }
        i++;
    }
    return 0;
}
