int Solution::findMinXor(vector<int> &A) 
{
    int min=INT_MAX,x;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        x=A[i] xor A[i+1];
        if(min>x)
            min=x;
    }
    return min;
}

