int find(vector<int> A,int x,int s1)
{
    int j=-1,s=0,e=A.size(),mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(A[mid]==x)
        {
            if(s1==1)
            {
                j=mid;
                s=mid+1;
            }
            else 
            {
                j=mid;
                e=mid-1;
            }
        }
        else if(A[mid]<x)
            s=mid+1;
        else e=mid-1;    
    }    
    return j;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) 
{
    vector<int> v;
    v.push_back(find(A,B,0));
    v.push_back(find(A,B,1));
    return v;
}
