bool isrow(int i, int j, vector<string> &board, char x)
{
    for(int p=0;p<board.size();p++)
    {
        if(p!=j && board[i][p]==x)
            return false;   
    }
    return true;
}
bool iscol(int i, int j, vector<string> & board, char x)
{
    for(int p=0;p<board.size();p++)
    {
        if(p!=i && board[p][j]==x)
            return false;
    }
    return true;
}
bool isbox(int i, int j, vector<string> & board, char x)
{
    int row=i-(i%3);
    int col=j-(j%3);
    for(int p=0;p<3;p++)
    {
        for(int q=0;q<3;q++)
        {
            if(p+row!=i && q+col!=j && board[p+row][q+col]==x)
                return false;
        }
    }
    return true;
}
bool issafe(int i, int j, vector<string> board, char x)
{
    return isrow(i,j,board,x) && iscol(i,j,board,x) && isbox(i,j,board,x);
}
int Solution::isValidSudoku(const vector<string> &A) 
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]!='.')
            {
                if(issafe(i,j,A,A[i][j])==false)
                    return 0;
            }
        }
    }
    return 1;
}

