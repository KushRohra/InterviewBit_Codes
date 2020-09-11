vector<string> Solution::fizzBuzz(int A) 
{
    vector<string> s;
    for(int i=1;i<=A;i++)
    {
        if(i%3==0 && i%5==0)
            s.push_back("FizzBuzz ");
        else if(i%3==0)
            s.push_back("Fizz ");
        else if(i%5==0)
            s.push_back("Buzz ");
        else 
        {
            s.push_back(char(i));
            s.push_back(" ");
        }
    }
    return s;
}

