string Solution::fractionToDecimal(int A, int B)
{
    //cout<<numerator<<" "<<denominator;
    long long int numerator = A;
    long long int denominator = B;
    if(numerator==0)
        return "0";
    string res="";
    bool f1 = numerator>0;
    bool f2 = denominator>0;
    if(f1^f2)
        res+="-";
    numerator = abs(numerator);
    denominator = abs(denominator);
    long long int p = numerator/denominator;
    res+=to_string(p);
    numerator%=denominator;
    if(numerator==0)
        return res;
    res+=".";
    unordered_map<int, int> m;
    int val;
    bool repeat = false;
    while(numerator!=0)
    {
        numerator*=10;
        if(m.find(numerator)!=m.end())
        {
            val = m[numerator];
            repeat = true;
            break;
        }
        else
        {
            m[numerator]=res.size();
        }
        int temp = numerator/denominator;
        res+=to_string(temp);
        numerator%=denominator;
    }
    if(repeat)
    {
        res+=")";
        res.insert(val, "(");
    }
    return res;
}

