void kadane(vector<int> temp, int &start, int &finish, int size, int value)
{
    int max=0;
    for(int i=0;i<size;)
    {
        int j=i, f=0;
        while(j<size && temp[j]==value)
        {
            j++;
            f=1;
        }
        if(f==0)
        {
            i++;
            continue;
        }
        
        if(j-i>max)
        {
            max=j-i;
            start=i;
            finish=j-1;
        }
        i=j;
    }
}
int Solution::maximalRectangle(vector<vector<int> > &A) 
{
    if(A.size()==0 || A[0].size()==0)
        return 0;
    int right, left, n=A.size(), m=A[0].size(), max=0, start, finish, f=0;
    for(left=0;left<m;left++)
    {
        vector<int> temp(n,0);
        //cout<<left<<endl;
        int area=-1;
        for(right=left;right<m;right++)
        {
            start=-1; finish=-1;
            for(int i=0;i<n;i++)
                temp[i]+=A[i][right];
            kadane(temp,start,finish,n,right-left+1);
            if(start!=-1)
                area=(right-left+1)*(finish-start+1);
            if(area>max)
                max=area;
        }
    }
    return max;    
}

