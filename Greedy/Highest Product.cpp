int Solution::maxp3(vector<int> &A) 
{
    int np,i,x;
    np=A.size();
    if(np==3)
        return A[0]*A[1]*A[2];
    vector<int> p,n;
    for(i=0;i<np;i++)
    {
        if(A[i]>=0)
            p.push_back(A[i]);
        else n.push_back(A[i]);
    }
    int n1,p1;
    p1=p.size();
    n1=n.size();
    sort(p.begin(),p.end());
    sort(n.begin(),n.end());
    int m1=INT_MIN,m2=INT_MIN,max=INT_MIN;
    if(p1==0)
    {
        return n[n1-1]*n[n1-2]*n[n1-3];
    }
    else
    {
        if(n1>=2)
            m1=n[0]*n[1];
        if(n1>=2 && p1==1)
            max=m1*p[0];
        if(n1>=2 && p1==2)
            max=m1*p[1];
        if(p1==3 && p[0]==0)
            max=m1*p[2];
        else if(p1==3 && p[0]!=0)
        {
            m2=p[p1-2]*p[p1-3];    
            if(m1>m2)
                max=m1;
            else max=m2;
            max*=p[p1-1];
        }
        if(p1>=3)
        {
            m2=p[p1-2]*p[p1-3];
            //cout<<v[p1-3]<<" "<<v[p1-2]<<endl;
            if(m1>m2)
                max=m1;
            else max=m2;
            max*=p[p1-1];
        }
        return max;    
    }
}

