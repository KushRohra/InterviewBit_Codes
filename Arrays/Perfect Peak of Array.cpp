int Solution::perfectPeak(vector<int> &A) 
{
    if(A.size()<=2)
        return 0;
    if(A.size()==3)
    {
        if(A[1]>A[0] && A[1]<A[2])
            return 1;
        return 0;
    }
    bool f=0; int max=A[0];
    vector<bool> v;
    for(int i=1;i<A.size()-1;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            v.push_back(true);
            f=1;
        }
        else v.push_back(false);
    }
    if(f==0)
        return 0;
    int j=v.size()-1;
    int min=A[A.size()-1];
    for(int i=A.size()-2;i>=1;i--)
    {
        if(A[i]<min)
        {
            min=A[i];
            if(v[j]==true)
                return true;
            j--;
        }
    }
    return false;
}

