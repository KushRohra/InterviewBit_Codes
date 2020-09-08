string Solution::intToRoman(int A) 
{
    string s="";
    if(A==0)
        return s;
    int i=12;
    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string symbol[]={"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    while(A>0)
    {
        int temp = A/num[i];
        A%=num[i];
        while(temp--)
            s+=symbol[i];
        i--;
    }
    return s;
}

