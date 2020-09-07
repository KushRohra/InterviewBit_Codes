string Solution::reverseString(string A) {
    stack<char> s;
    for(int i=0;i<A.length();i++)
        s.push(A[i]);
    string s1;
    while(s.empty()==false)
    {
        s1+=s.top();
        s.pop();
    }
    return s1;
}
