vector<int> sol;
void bfs(int n, int m, int num)
{
    queue<int> q;
    q.push(num);
    while(!q.empty())
    {
        int stepNum = q.front();
        q.pop();
        if(stepNum>=n && stepNum<=m)
            sol.push_back(stepNum);
        if(num==0 || stepNum>m)
            continue;
        int lastDigit = stepNum%10;
        int stepNumA = stepNum*10 + (lastDigit-1);
        int stepNumB = stepNum*10 + (lastDigit+1);
        if(lastDigit == 0)
            q.push(stepNumB);
        else if(lastDigit == 9)
            q.push(stepNumA);
        else
        {
            q.push(stepNumA);
            q.push(stepNumB);
        }
    }
}
vector<int> Solution::stepnum(int A, int B) 
{
    sol.clear();
    for(int i=0;i<=9;i++)
        bfs(A,B,i);
    sort(sol.begin(), sol.end());
    return sol;
}

