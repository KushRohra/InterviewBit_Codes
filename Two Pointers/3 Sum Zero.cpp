vector< vector<int> > threesum(vector<int> v, int t)
{
    int n=v.size();
    vector< vector<int> > sol;
    for(int k=0;k<n-1;k++)
    {
        int i=k+1;
        int j=v.size()-1;
        int w=v[k];
        while(i<j)
        {
            int x=v[k]+v[i]+v[j];
            //cout<<v[k]<<" "<<v[i]<<" "<<v[j]<<" "<<x<<" "<<abs(t-x)<<endl;
            if (x==0) 
            {
                vector<int> v1;
                v1.push_back(v[k]);
                v1.push_back(v[i]);
                v1.push_back(v[j]);
                vector< vector<int> >::iterator it = find(sol.begin(), sol.end(), v1);
                if(it==sol.end())   
                    sol.push_back(v1);
            }    
            if(x>t)
                j--;
            else i++;    
        }
    }
    return sol;
}
vector<vector<int> > Solution::threeSum(vector<int> &A) 
{
    sort(A.begin(), A.end());
    int target = 0;
    return threesum(A, target);    
}

