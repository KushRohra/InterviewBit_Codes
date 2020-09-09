vector<int> Solution::primesum(int A) 
{
    int i,j;
    vector<bool> v;
    vector<int> s;
    for(i=0;i<A+1;i++)
        v.push_back(true);
    for(j=2;j<=sqrt(A);j++)
    {
        if(v[j]==true)
        {
            for(i=2;i*j<=A;i++)
                v[j*i]=false;
        }
    }
    for(j=2;j<A;j++)
    {
        if(v[j]==true)
        {
             if(v[A-j]==true)
             {
                 s.push_back(j);
                 s.push_back(A-j);
                 return s;
             }
        }
    }
}

