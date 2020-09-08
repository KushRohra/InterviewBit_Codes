void Solution::arrange(vector<int> &A) 
{
    int i=0, N=A.size();
    for(i=0;i<N;i++)
        A[i]+=(A[A[i]]%N)*N;
    for(i=0;i<N;i++)
        A[i]/=N;
}
