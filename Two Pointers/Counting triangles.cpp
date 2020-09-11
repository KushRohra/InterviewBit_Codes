int Solution::nTriang(vector<int> &nums) 
{
    int i, j, k, c=0, n=nums.size();
    long long int mod = 1e9+7;
    sort(nums.begin(), nums.end());
    for(i=nums.size()-1;i>=2;i--)
    {
        j=0; k=i-1;
        while(j<k)
        {
            //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
            if(nums[j]+nums[k]>nums[i])
            {
                 c=(c+(k-j)%mod)%mod;
                 k--;
            }
            else j++;
        }
    }
    return c%mod;
}

