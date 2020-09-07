int Solution::maxProduct(const vector<int> &A) 
{
    vector<int> curr_max, curr_min;
    curr_max.push_back(A[0]);
    curr_min.push_back(A[0]);
    for(int i=1;i<A.size();i++)
    {
        int x=A[i], y=curr_max[i-1]*A[i], z=curr_min[i-1]*A[i];
        curr_max.push_back(max(x, max(y,z)));
        curr_min.push_back(min(x, min(y,z)));
    }
    int ma=INT_MIN;
    for(int i=0;i<curr_max.size();i++)
        ma=max(ma, curr_max[i]);
    return ma;
}

