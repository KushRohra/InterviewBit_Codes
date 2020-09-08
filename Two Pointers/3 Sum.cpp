int threesum(vector<int> v, int t)
{
    int n=v.size();
    if(n==3)
        return v[0]+v[1]+v[2];
    long long int min=INT_MAX;
    for(int k=0;k<n-2;k++)
    {
        int i=k+1;
        int j=v.size()-1;
        int w=v[k];
        while(i<j)
        {
            int x=v[k]+v[i]+v[j];
            //cout<<v[k]<<" "<<v[i]<<" "<<v[j]<<" "<<x<<" "<<abs(t-x)<<endl;
            if (abs(t-x)<abs(t-min)) 
            {
                min=x;
            }    
            if(x>t)
                j--;
            else i++;    
        }
    }
    return min;
}
int Solution::threeSumClosest(vector<int> &A, int B) 
{
    sort(A.begin(), A.end());
    return threesum(A, B);
}
