void moveZeroes(vector<int>& nums) {
    int c=0,i,n=nums.size(),j;
    j=0;
    for(i=0;i<n;i++) {
        if(nums[i]==0)
            c++;
        else nums[j++]=nums[i];
    }
    j=n-1;
    for(i=0;i<c;i++)
        nums[j--]=0;
}
