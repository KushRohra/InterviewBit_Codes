unsigned int Solution::reverse(unsigned int A) 
{
    vector<int> v(32,0);
    long long int a=0;
    int i=0;
    while(A!=0)
    {
        if(A%2==1)
            v[i]=1;
        A=A/2;
        i++;
    }
    for(i=0;i<32;i++)
    {
        //cout<<v[i]<<" ";
        a+=v[i]*pow(2,32-i-1);
    }
    return a;
}

