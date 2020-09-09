int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int i,n,x,y,steps=0;
    n=A.size();
    for(i=0;i<n-1;i++)
    {
        x=A[i]-A[i+1];
        x=abs(x);
        y=B[i]-B[i+1];
        y=abs(y);
        while(x!=0 && y!=0)
        {
            x--;
            y--;
            steps++;
        }
        if(x==0)
            steps+=y;
        if(y==0)
            steps+=x;
        //cout<<X[i]<<Y[i]<<X[i+1]<<Y[i+1]<<g<<" ";
        //cout<<x<<" "<<y<<" ";
        //cout<<steps<<endl;
    }
    return steps;
}

