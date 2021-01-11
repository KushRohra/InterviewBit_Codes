vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) 
{
    int i;
    set<int> s1, s2, s3, s;
    for(i=0;i<A.size();i++)
    {
        s1.insert(A[i]);
        s.insert(A[i]);
    }
    for(i=0;i<B.size();i++)
    {
        s2.insert(B[i]);
        s.insert(B[i]);
    }
    for(i=0;i<C.size();i++)
    {
        s3.insert(C[i]);
        s.insert(C[i]);
    }
    vector<int> sol;
    for(auto it=s.begin();it!=s.end();it++)
    {
        int c1=0, c2=0, c3=0, x=*it;
        c1 = s1.find(x)!=s1.end();
        c2 = s2.find(x)!=s2.end();
        c3 = s3.find(x)!=s3.end();
        //cout<<x<<" "<<c1<<" "<<c2<<" "<<c3<<" ";
        if(c1+c2+c3>1)
            sol.push_back(x);
    }
    return sol;
    sort(sol.begin(), sol.end());
}

