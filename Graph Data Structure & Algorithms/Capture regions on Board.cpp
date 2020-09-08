void dfs(vector<vector<char>> &v, int i, int j, int r, int c)
{
    if(i>r-1 || i<0 || j>c-1 || j<0 || v[i][j]!='O')
        return;
    if(v[i][j]=='O')
        v[i][j]='*';
    dfs(v,i,j-1,r,c);
    dfs(v,i,j+1,r,c);
    dfs(v,i-1,j,r,c);
    dfs(v,i+1,j,r,c);
}
void Solution::solve(vector<vector<char> > &A) 
{
    int i, j, rows, cols;
    vector<vector<char>> board=A;
    rows=board.size();
    if(rows==0) return;
    cols=board[0].size();
    if(cols==0) return;
    for(i=0;i<rows;i++)
    {
        if(board[i][0]=='O')
            dfs(board, i, 0, rows, cols);
        if(board[i][cols-1]=='O')
            dfs(board, i, cols-1, rows, cols);
    }
    for(j=0;j<cols;j++)
    {
        if(board[0][j]=='O')
            dfs(board, 0, j, rows, cols);
        if(board[rows-1][j]=='O')
            dfs(board, rows-1, j, rows, cols);
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(board[i][j]=='O')
                board[i][j]='X';
            else if(board[i][j]=='*')
                board[i][j]='O';
        }
    }
    A=board;
}
