void matched(vector<string> &v, string s, int left, int right, int n)
{
    if(!(left<0 || right<0))
    {
        if(left!=0)
            matched(v,s+"(",left-1,right,n);
        if(right>left)
            matched(v,s+")",left,right-1,n);
        if(s.length()==2*n)
            v.push_back(s);
    }
}
vector<string> Solution::generateParenthesis(int A) 
{
    vector<string> v;
    string s="";
    matched(v,s,A,A,A);
    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
}

