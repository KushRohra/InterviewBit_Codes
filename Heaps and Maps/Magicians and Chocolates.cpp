int Solution::nchoc(int A, vector<int> &B) 
{
    multiset<int> s;
    int i,n=B.size(),c=0;
    for(i=0;i<n;i++)
    {
        s.insert(B[i]);
    }
    while(A!=0)
    {
        auto it=s.end();
        it--;
        int k=*it;
        c=(c+(k%1000000007))%1000000007;
        c=c%(1000000007);
        s.erase(it);
        s.insert(k/2);
        A--;
    }
    //c=c%(1000000007);
    return c;
}

