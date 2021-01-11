string Solution::solve(string A) 
{
    int i;
    for(i=A.length()-2;i>=0;i--)
        if(int(A[i])<int(A[i+1]))
            break;
    if(i==-1)
        return "-1";
    sort(A.begin()+i+1, A.end());
    swap(A[i], A[i+1]);
    return A;
}

