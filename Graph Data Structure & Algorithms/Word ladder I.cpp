int Solution::solve(string A, string target, vector<string> &words) 
{
    unordered_set<string> s;
    for(int i=0;i<words.size();i++)
        s.insert(words[i]);
    if(s.find(target)==s.end())
        return 0;
    int level = 0;
    queue<string> q;
    q.push(A);
    while(!q.empty())
    {
        level++;
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            string word = q.front();
            q.pop();
            for(int j=0;j<word.length();j++)
            {
                string temp = word;
                for(char x='a';x<='z';x++)
                {
                    temp[j] = x;
                    if(temp==target)
                        return level+1;
                    if(s.find(temp)!=s.end())
                    {
                        s.erase(temp);
                        q.push(temp);
                    }
                }
            }
        }    
    } 
    return 0;
}
