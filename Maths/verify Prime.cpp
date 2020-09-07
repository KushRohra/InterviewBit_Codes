int Solution::isPrime(int A) {
    vector<int> v;
    if(A<2)
        return 0;
    for(int i=1;i<=sqrt(A);i++)
    {
        if(A%i==0)
        {
            if(A%i==1)
                v.push_back(i);
            else 
            {
                v.push_back(i);
                v.push_back(A/i);
            }
        }
        if(v.size()>2)
            return 0;
    }
    return 1;
}
