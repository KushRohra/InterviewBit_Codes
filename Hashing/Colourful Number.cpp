int Solution::colorful(int A) 
{
    int n=A;
    vector<int> v;
    while(n!=0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    int i,j,k;
    n=v.size();
    int product1 = 1;
    unordered_map<int, int > m;
    for(i=0;i<n;i++)
    {
        product1 *= v[i];
        //cout<<v[i]<<" ";
    }
    //cout<<endl<<product1<<endl;
    for(i=0;i<n;i++)
    {
        //int product = 1;
        for(j=i;j<n;j++)
        {
            int product = 1;
            for(k=i;k<=j;k++)
            {
                product = product*v[k];    
            }
            //if(product!=product1)
            m[product]++;
            //cout<<product<<" ";
        }
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>1)
            return 0;
    }
    return 1;
}
