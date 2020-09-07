int Solution::maxProfit(const vector<int> &A)
{
    int i=0,j=0,sum=0;
    if(A.size()<2)
        return 0;
    if(A.size()==2)
    {
        if(A[0]<A[1])
            return A[1]-A[0];
        else return 0;
    }
    for(;i<A.size();)
    {
        j=i;
        while(j<A.size()-1 && A[j+1]>A[j])
        {
            j++;    
        }
        if(j!=i) sum+=A[j]-A[i];
        i=j+1;
        if(j==A.size()-2)
            if(A[j]<A[j+1])
                sum+=A[j+1]-A[j];
    }
    return sum;
}

