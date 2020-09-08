vector<int> Solution::twoSum(const vector<int> &A, int B) 
{
    int x,i,n=A.size();
    multiset<int> m;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        m.insert(A[i]);
    }
    int j,f=0,i1=INT_MAX,j1=INT_MAX;
    for(i=0;i<n;i++)
    {
        x=B-A[i];
        //cout<<x<<" ";
        if(m.find(x)!=m.end())
        {
            if(x==A[i] && m.count(x)>1)
            {
                f=1;
                for(int k=0;k<n;k++)
                {
                    if(A[k]==x && k!=i)
                    {
                        j=k;
                        //cout<<j<<" ";
                        break;
                    }   
                }
            }  
            else if(x!=A[i])
            {
                f=1;
                for(int k=0;k<n;k++)
                {
                    if(A[k]==x && k!=i)
                    {
                        j=k;
                        //cout<<j<<" ";
                        break;
                    }   
                }             
            }
        }
        if(f==1)
        {
            if(j1>j && i<j)
            {
                i1=i;
                j1=j;
            }
        }
        //cout<<" "<<i1<<" "<<j1<<endl;
    }
    if(f==1)
    {
        v.push_back(i1+1);
        v.push_back(j1+1);    
    }
    return v;
}
