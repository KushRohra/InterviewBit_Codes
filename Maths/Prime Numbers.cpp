vector<int> Solution::sieve(int A) {
    vector<int> s,v(A+1,1);
    v[0]=v[1]=0;
    for(int i=2;i<A+1;i++)
    {
        if(v[i]==1)
        {
            for(int j=2;j*i<A;j++)
                v[j*i]=0;
        }
    }
    for(int i=2;i<A;i++)
        if(v[i]==1)
            s.push_back(i);
    return s;
}
