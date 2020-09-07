void print(vector< vector<int> > &v, vector< vector<string> > &sol, int n)
{
    vector<string> s;
    int i,j;
    for(i=0;i<n;i++)
    {
        string s1;
        for(j=0;j<n;j++)
        {
            if(v[i][j]==0)
                s1+='.';
            else s1+='Q';
        }
        s.push_back(s1);
    }
    sol.push_back(s);
}
bool issafe(vector< vector<int> > v, int row, int col, int n)
{
    int i, j;
    for(i=0;i<col;i++)
    {
        if(v[row][i]==1)
            return false;
    }
    for(i=row, j=col;i>=0 && j>=0;i--, j--)
    {    
        if(v[i][j]==1)
            return false;
    }
    for(i=row, j=col; j>=0 && i<n; j--, i++)
    {
        if(v[i][j]==1)
            return false;
    }
    return true;
}
bool solveutil(vector< vector<int> > &v, int col, int n, vector< vector<string> > &sol)
{
    if(col>=n)
    {
        print(v,sol,n);
        return true;
    }
    bool res = false;
    for(int i=0;i<n;i++)
    {
        if(issafe(v,i,col,n)==true)
        {
            v[i][col]=1;
            res = (solveutil(v, col+1, n, sol)) || res;
            v[i][col]=0;
        }
    }
    return res;
}
vector<vector<string> > Solution::solveNQueens(int A) 
{
    int col=0,i,j,n=A;
    vector< vector<int> > v;
    vector< vector<string> > sol;
    for(i=0;i<n;i++)
    {
        vector<int> s;
        for(j=0;j<n;j++)
        {
            s.push_back(0);
        }
        v.push_back(s);
    }
    solveutil(v, col, n, sol);
    return sol;
}
