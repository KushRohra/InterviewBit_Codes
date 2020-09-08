bool dfs(vector<string> &board, string word, int i, int j, int pos)
{
    if(pos==word.length())
        return true;
    if(i<0 || j<0 || i>=board.size() || j>=board[0].length() || board[i][j]!=word[pos])
        return false;
    bool found = dfs(board,word,i+1,j,pos+1) || dfs(board,word,i-1,j,pos+1) || dfs(board,word,i,j+1,pos+1) || dfs(board,word,i,j-1,pos+1);
    return found;
}
int Solution::exist(vector<string> &A, string B) 
{
    bool found=false;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].length();j++)
        {
            if(A[i][j]==B[0])
            {
                found = found || dfs(A,B,i,j,0);
            }
        }
    }
    return found;
}

