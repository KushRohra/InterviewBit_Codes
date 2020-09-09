int Solution::fibsum(int A) 
{
    int k=A;
    int a=0, b=1, c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    while(b<=k)
    {   
        c=a+b;
        a=b;
        b=c;
        if(c<=k)
            v.push_back(b);
    }
    int i=0, c1=0;
    //for(i=0;i<v.size();i++)
       // cout<<v[i]<<" ";
    i=v.size()-1;
    while(k>0)
    {
        c1+=k/v[i];
        k=k%v[i];
        i--;
    }
    return c1;
}

