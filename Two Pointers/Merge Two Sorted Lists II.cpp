void Solution::merge(vector<int> &A, vector<int> &B) 
{
    if(A.size()==0)
    {
        A=B;
        return;
    }
    if(B.size()==0)
        return;
    int x,i=0,j=0,n1=A.size(),n2=B.size();
    vector<int> v;
    while(i<n1 && j<n2)
    {
        if(A[i]<B[j])
        {
            x=A[i];    
            i++;
        }
        else 
        {
            x=B[j];
            j++;    
        }
        v.push_back(x);
    }
    while(i<n1)
    {
        v.push_back(A[i]);
        i++;
    }
    while(j<n2)
    {
        v.push_back(B[j]);
        j++;
    }
    A=v;
    return ;
}

