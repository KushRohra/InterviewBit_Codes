int find(vector<int> &cycle, int i)
{
    while(cycle[i]!=-1)
        i=cycle[i];
    return i;
}
int notcycle(vector<int> &cycle, int x, int y)
{
    x=find(cycle, x);
    y=find(cycle, y);
    if(x==y)
        return 0;
    else 
    {
        cycle[x]=y;    
        return 1;
    }    
}
int paths(multimap<int, pair<int, int> > m, vector<int> &cycle, int n)
{
    int c=0;
    //vector<int> x1;
    //vector<int> y1; 
    auto it=m.begin();
    while(n-1 && it!=m.end())
    {
        if(notcycle(cycle, it->second.first-1, it->second.second-1)==1)
        {
            c+=it->first;
            //x1.push_back(it->second.first);
            //y1.push_back(it->second.second);
            n--;
        }
        it++;
    }
    //for(int i=0;i<x1.size();i++)
    //    cout<<x1[i]<<" "<<y1[i]<<endl;
    return c;
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    multimap<int, pair<int, int> > m1;
    int i, n=A;
    for(i=0;i<B.size();i++)
    {
        m1.insert( {B[i][2], make_pair(B[i][0],B[i][1]) } );
    }
    /*for(auto it=m1.begin();it!=m1.end();it++)
       cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<" ";*/
    vector<int> cycle(n,-1);
    return paths(m1,cycle,n);
    //return -1;
}

