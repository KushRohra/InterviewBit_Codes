int Solution::removeElement(vector<int> &A, int B)
{
    int j=0,i=0;    
    for( ;i<A.size(); )
    {
        //cout<<i<<" "<<j<<endl;
        if(B==A[i])
        {
            i++;
        }
        else 
        {
            A[j]=A[i];
            i++;
            j++;
        }
    }
    int x=A.size()-j;
    i=A.size()-1;
    while(i<A.size())
    {
        A.pop_back(i);
        i++;
    }
    return j;
}
