void dfs(vector<string> &sol, string &s, int j, string digits, vector<string> d)
{
    if(s.length()==digits.length())
        sol.push_back(s);
    if(j>=digits.length())
        return ;
    int c=digits[j]-48;
    for(int i=0;i<d[c].length();i++)
    {
        s+=d[c][i];
        dfs(sol,s,j+1,digits,d);
        s.pop_back();
    }
}
vector<string> Solution::letterCombinations(string A) 
{
    vector<string> sol, d;
    d={"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if(A.length()==0)
        return sol;
    int c=A[0]-48;
    string s="";
    int j=1;
    for(int i=0;i<d[c].length();i++)
    {
        s+=d[c][i];
        dfs(sol,s,j,A,d);
        s.pop_back();
    }
    return sol;
}

