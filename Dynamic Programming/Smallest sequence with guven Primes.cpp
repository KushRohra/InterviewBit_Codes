vector<int> Solution::solve(int A, int B, int C, int D) 
{
    int p1=A, p2=B, p3=C, K=D; 
    int i=0,j=0,k=0;
    vector<int> v;
    v.push_back(1);
    for(int p=0;p<K;p++)
    {
        int x=v[i]*p1, y=v[j]*p2, z=v[k]*p3;
        int least=min(x, min(y,z));
        v.push_back(least);
        if(least==x)
            i++;
        if(least==y)
            j++;
        if(least==z)
            k++;
    }
    v.erase(v.begin());
    sort(v.begin(), v.end());
    return v;
}

