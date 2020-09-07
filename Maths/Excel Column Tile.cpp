string Solution::convertToTitle(int n) 
{
    string s="";
    while(n>0)
    {
        n-=1;
        char x = char((n%26)+65); // Convert to base 26
        s+=x;
        n/=26;  // Shortening the no by the value of the base
    }
    reverse(s.begin(), s.end());
    return s;
}

