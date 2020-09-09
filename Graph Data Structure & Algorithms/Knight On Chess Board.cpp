typedef pair<pair<int, int>, int> ppi;
bool isSafe(int x, int y, int n, int m)
{
    if(x>0 && y>0 && y<=m && x<=n)  
        return true;
    return false;
}
int Solution::knight(int A, int B, int C, int D, int E, int F) 
{
    int startPosX=C, startPosY=D, endPosX=E, endPosY=F;
    bool vis[A+1][B+1];
    memset(vis,0,sizeof(vis));
    queue<ppi> q;
    int ans=INT_MAX, x, y, dist, newX, newY;
    vis[startPosX][startPosY]=1;
    int X[]={1,1,-1,-1,2,2,-2,-2};
    int Y[]={2,-2,2,-2,1,-1,1,-1};
    q.push({{startPosX, startPosY}, 0});
    while(!q.empty()) {
        x=q.front().first.first;
        y=q.front().first.second;    
        dist=q.front().second;
        q.pop();
        if(x==endPosX && y==endPosY)
            ans=min(ans,dist);
        for(int i=0;i<8;i++) {
            newX=x+X[i];
            newY=y+Y[i];
            if(isSafe(newX, newY, A, B) && vis[newX][newY]==0) {
                vis[newX][newY]=1;
                q.push({{newX, newY}, dist+1});
            }
        }
    }
    if(ans==INT_MAX)
        return -1;
    return ans;
}
