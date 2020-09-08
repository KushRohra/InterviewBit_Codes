void Solution::sortColors(vector<int> &A) 
{
    vector<int> nums=A;
    int i=0, j=nums.size()-1;
    while(i<nums.size() && nums[i]==0)
        i++;
    while(j>=0 && nums[j]==2)
        j--;
    int curr=i;
    if(j<=0)
        return ;
    if(i>=nums.size())
        return ;
    int c=0;
    while(curr<=j)
    {
        if(nums[curr]==2)
        {
            if(nums[j]==0)
                c++;
            else if(nums[j]==2)
            {
                j--;
                continue;
            }
            nums[j]=2;
            j--;
        }
        else if(nums[curr]==0)
        {
            nums[i]=0;
            i++;
        }
        curr++;
    }
    while(c!=0)
    {
        nums[i]=0;
        i++;
        c--;
    }
    for(int p=i;p<=j;p++)
        nums[p]=1;    
    A=nums;
}
