vector<int> Solution::dNums(vector<int> &A, int B) 
{
    unordered_map <int, int> m;
    int i,n=A.size(),k=B;
    for(i=0;i<k;i++)
    {
        m[A[i]]++;
    }
    int j=0;
    vector<int> v;
    v.push_back(m.size());
    for(i=k;i<n;i++)
    {
        m[A[j]]--;
        auto p=m.find(A[j]);
        if(m[A[j]]==0)
            m.erase(p);
        m[A[i]]++;
        j++;
        v.push_back(m.size());
    }
    return v;    
}

