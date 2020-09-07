bool myCompare(int x, int y)
{
    string X = to_string(x);
    string Y = to_string(y);
    string XY = X.append(Y);
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
}
string Solution::largestNumber(const vector<int> &A) 
{
    vector<int> B;
    bool bAllZero = true;
    for (int i=0; i<A.size(); i++)
    {
        B.push_back(A[i]);
        if(A[i]>0)
            bAllZero = false;
    }
    if(bAllZero)
        return "0";
    string str = "";
    sort(B.begin(), B.end(), myCompare);
    for (int i=0; i<B.size(); i++)
        str+=to_string(B[i]);
    return str;
}

