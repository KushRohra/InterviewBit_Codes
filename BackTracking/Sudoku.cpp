bool UsedInBox(vector<vector<int>> &v, int boxStartRow, int boxStartCol, int num) 
{ 
    for (int row = 0; row < 3; row++) 
        for (int col = 0; col < 3; col++) 
            if (v[row + boxStartRow][col + boxStartCol] == num) 
                return true; 
    return false; 
}
bool UsedInCol(vector<vector<int>> &v, int col, int num) 
{ 
    for (int row = 0; row < v.size(); row++) 
        if (v[row][col] == num) 
            return true; 
    return false; 
} 
bool UsedInRow(vector<vector<int>> &v, int row, int num) 
{ 
    for (int col = 0; col < v[0].size(); col++) 
        if (v[row][col] == num) 
            return true; 
    return false; 
} 
bool isSafe(vector<vector<int>> &v , int row, int col, int num) 
{ 
    return !UsedInRow(v, row, num) && !UsedInCol(v, col, num) && !UsedInBox(v, row - row % 3, col - col % 3, num) && v[row][col] == 0; 
} 
bool FindUnassignedLocation(vector<vector<int>> &v, int& row, int& col) 
{ 
    for (row = 0; row < v.size(); row++) 
        for (col = 0; col < v[0].size(); col++) 
            if (v[row][col] == 0) 
                return true; 
    return false; 
} 
bool solve(vector<vector<int>> &v)
{
    int row, col, n=v.size(), m=v[0].size(), i, j;
    if (!FindUnassignedLocation(v, row, col)) 
        return true; 
    for (int num = 1; num <= 9; num++) 
    { 
        if (isSafe(v, row, col, num)) 
        { 
            v[row][col] = num; 
            if (solve(v)) 
                return true; 
            v[row][col] = 0; 
        } 
    } 
    return false; 
}
void Solution::solveSudoku(vector<vector<char> > &A) 
{
    int i, j;
    vector<vector<int> > v(A.size(), vector<int>(A[0].size(), 0));
    for(i=0;i<A.size();i++)
        for(j=0;j<A[0].size();j++)
            if(A[i][j]!='.')
                v[i][j]=int(A[i][j])-int('0');
    solve(v);
    /*for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
            cout<<A[i][j];
        cout<<" ";
    }*/
    for(i=0;i<A.size();i++)
        for(j=0;j<A[0].size();j++)
            A[i][j]=char(v[i][j]+int('0'));
}
