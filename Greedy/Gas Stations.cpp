int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B)
{
    int g=0, c=0, tank=0, start=0, i, defecit=0;
    for(i=0;i<B.size();i++)
    {
        tank+=A[i]-B[i];
        if(tank<0)
        {
            defecit+=tank;
            tank=0;
            start=i+1;
        }
    }
    if(tank+defecit<0)
        return -1;
    return start;
}

