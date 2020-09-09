int coins(vector<int> a, int i, int j, vector<vector<int> > &v) {
    if(i==j)
        return a[j];
    if(j==i+1)
        return max(a[i], a[j]);
    if(v[i][j]!=-1)
        return v[i][j];
    int x,y;
    x=a[i]+min(coins(a,i+1,j-1,v), coins(a,i+2,j,v));
    y=a[j]+min(coins(a,i+1,j-1,v), coins(a,i,j-2,v));
    return v[i][j]=max(x,y);
}
int Solution::maxcoin(vector<int> &a) {
    int n=a.size();
    int i=0, j=n-1;
    vector<vector<int> > v(n, vector<int> (n,-1));
    return coins(a,i,j,v);
}

