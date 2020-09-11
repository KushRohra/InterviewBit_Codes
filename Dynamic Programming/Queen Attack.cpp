void dfs(vector<string> &A, int i, int j, int n, int m, vector<vector<int>> &v) {
    int X[]={1, 1, 0, -1, -1, -1, 0, 1};
    int Y[]={0, -1, -1, -1, 0, 1, 1, 1};
    for(int k=0;k<8;k++) {
        int x=i+X[k];
        int y=j+Y[k];
        while(x>=0 && y>=0 && x<n && y<m) {
            v[x][y]++;
            if(A[x][y]=='1')
                break;
            x+=X[k];
            y+=Y[k];
        }
    }
    
}
vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    vector<vector<int>> temp;
    if(A.size()==0 || A[0].size()==0)
        return temp;
    int n=A.size(), m=A[0].size(), i, j;
    vector<vector<int>> v(n, vector<int> (m,0));
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(A[i][j]=='1')
                dfs(A,i,j,n,m,v);
    return v;
}

