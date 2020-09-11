int X[]={0,0,1,1,1,-1,-1,-1};
int Y[]={1,-1,0,1,-1,0,1,-1};
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) 
{
    int i,j,k,rect[A+1][B+1],newX,newY;
    memset(rect,0,sizeof(rect));
    for(i=0;i<A+1;i++)
        for(j=0;j<B+1;j++)
            for(k=0;k<C;k++)
                if(sqrt(pow(E[k]-i,2)+pow(F[k]-j,2))<=D)
                    rect[i][j]=1;
    if(rect[0][0]==1 || rect[A][B]==1)
        return "NO";
    queue<pair<int, int>> q;
    q.push(make_pair(0,0));
    rect[0][0]=1;
    while(!q.empty())
    {
        pair<int, int> temp = q.front();
        q.pop();
        int x = temp.first;
        int y = temp.second;
        if(x==A && y==B)
            return "YES";
        for(i=0;i<8;i++)
        {
            newX = x + X[i];
            newY = y + Y[i];
            if(newX>=0 && newX<=A && newY>=0 && newY<=B && rect[newX][newY]==0)
            {
                rect[newX][newY] = 1;
                q.push(make_pair(newX, newY));
            }
        }
    }
    return "NO";
}

