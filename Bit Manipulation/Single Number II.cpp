int Solution::singleNumber(const vector<int> &A) 
{
    long long int g=0,i,f,n=A.size(),j;
    for(i=0;i<32;i++)
    {
        int a=0;
        //cout<<(1<<i)<<endl;
        for(j=0;j<n;j++)
        {
            f=A[j] & 1<<i;
            //cout<<f<<" ";
            if(f==1<<i)
                a++;
        }
        //cout<<a<<endl;
        if(a%3==1)
            g+=1*pow(2,i);
    }
    return (int)g;
}
