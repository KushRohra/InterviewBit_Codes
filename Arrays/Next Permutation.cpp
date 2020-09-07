vector<int> Solution::nextPermutation(vector<int> &A) 
{
    int n,i,x;
    n=A.size();
    reverse(A.begin(),A.end());
    x=0;
    for(i=0;i<n-1;i++)
    {
        if(A[i]<=A[i+1])
            x++;
        else break;
    }
    if(x==n-1)
        return A;
    else
    {
        int min=INT_MAX,y=A[x+1],j;
        for(i=0;i<x+1;i++)
        {
            if(A[i]>y && A[i]<min)
                min=A[i],j=i;    
        }            
        //cout<<min<<" "<<j<<endl;
        A[x+1]=A[j];
        A[j]=y;
        vector<int> a;
        for(i=0;i<x+1;i++)
            a.push_back(A[i]);
        //print(a);
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(i=0;i<x+1;i++)
            A[i]=a[i];
        //partial_sort(v.begin(),v.begin()+x+1,v.end());
        reverse(A.begin(),A.end());
        return A;        
    }
}
