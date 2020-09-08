vector<int> Solution::maxset(vector<int> &A) 
{
    long long int i, n=A.size(), sum=0, max=INT_MIN, l=0, left=-1, right=-1;
    vector<int> sol;
    if(n==0)
        return sol;
    for(i=0;i<n;i++)
    {
        if(A[i]>=0)
        {
            sum+=A[i];
            if(sum>max)
            {
                max=sum;
                left=l;
                right=i;
            }
            else if(sum==max)
            {
                if(i-l>right-left)
                {
                    right=i;
                    left=l;
                }
            }    
        }
        else
        {
            sum=0;
            l=i+1;
        }
        //cout<<left<<" "<<right<<endl;
    }
    //cout<<endl;
    //cout<<max<<" "<<left<<" "<<right<<endl;
    if(left==-1)
        return sol;
    for(i=left;i<=right;i++)
        sol.push_back(A[i]);
    return sol;
}

