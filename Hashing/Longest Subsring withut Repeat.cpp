int Solution::lengthOfLongestSubstring(string A) 
{
    int l,i,k,n=A.size(),max=INT_MIN,s1=0,x;
        vector<int> v(256,0);
        for(i=0;i<n;i++)
        {
            x=int(A[i]);
            if(v[x]==0)
                v[x]=1;
            else
            {
                k=s1;
                while(v[x]==1)
                {
                    v[int(A[k])]=0;
                    k++;
                }
                v[x]=1;
                s1=k;
            }
            l=i-s1+1;
            if(max<l)
                max=l;
        }
        if(max==INT_MIN)
            max=0;
        return max;
}

