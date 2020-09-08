vector<int> Solution::wave(vector<int> &A)
{
    int k;
    sort(A.begin(),A.end());
    /*for(int i=0;i<A.size();)
        cout<<A[i];*/
    int n=A.size();
    if(n%2==1)
        n=n-1;
    for(int i=0;i<n;)
    {
        k=A[i];
        A[i]=A[i+1];
        A[i+1]=k;
        i=i+2;
    }
    return A;
}

