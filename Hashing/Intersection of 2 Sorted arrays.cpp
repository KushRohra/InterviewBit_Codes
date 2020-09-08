vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B)
{
    vector<int> sol;
    int i=0,j=0,n1=A.size(),n2=B.size();
    while(i<n1 && j<n2)
    {
        //cout<<A[i]<<" "<<B[j]<<endl;
        if(A[i]==B[j])
        {
            sol.push_back(A[i]);
            i++;
            j++;
        }    
        else if(A[i]>B[j])
            j++;
        else i++;
    }
    return sol;
}
