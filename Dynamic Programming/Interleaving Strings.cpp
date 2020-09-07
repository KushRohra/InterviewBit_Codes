unordered_map<string, bool> m; 
bool solve(string A, string B, string C)
{
    if(C.length()==0)
    {
        if(A.length()!=0 || B.length()!=0)
            return false;
        if(A.length()==0 && B.length()==0)
            return true;
    }
    string temp=A+" "+B+" "+" "+C;
    if(m.find(temp)!=m.end())
        return m[temp];
    bool res=false;
    if(A.length()>0 && B.length()>0 && C.length()>0)
    {    
        if(A[0]==C[0] && B[0]==C[0])
            res = res || solve(A.substr(1,A.length()), B, C.substr(1,C.length())) || solve(A, B.substr(1,B.length()), C.substr(1,C.length()));
        else if(A[0]!=C[0] && B[0]!=C[0])
            res=false;
    }
    if(A.length()>0 && C.length()>0 && A[0]==C[0])
        res = res || solve(A.substr(1,A.length()), B, C.substr(1,C.length()));
    if(B.length()>0 && C.length()>0 && B[0]==C[0])
        res = res || solve(A, B.substr(1,B.length()), C.substr(1,C.length()));
    return m[temp]=res;
}
bool check(string s1, string s2, string s3)
{
    if(s1.length()==0 && s2.compare(s3)==0)
    return true;
    if(s2.length()==0 && s1.compare(s3)==0)
        return true;
    if(s1.length()+s2.length()!=s3.length())
        return false;
    m.clear();
    return solve(s1,s2,s3);
}
int Solution::isInterleave(string A, string B, string C) 
{
    return check(A,B,C);
}

