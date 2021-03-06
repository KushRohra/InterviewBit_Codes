stack<int> s;
stack<int> mins;

MinStack::MinStack() 
{
    while(!s.empty())
        s.pop();
    while(!mins.empty())
        mins.pop();
}

void MinStack::push(int x) 
{
    s.push(x);
    if(mins.size()==0)
        mins.push(x);
    else
    {
        if(x<=mins.top())
        {
            mins.push(x);
        }
        else
        {
            mins.push(mins.top());    
        }
    }
}

void MinStack::pop() 
{
    if(s.size()!=0)
    {
        s.pop();
        mins.pop();
    }
}

int MinStack::top()
{
    if(s.size()==0)
        return -1;
    return s.top();
}

int MinStack::getMin() 
{
    if(mins.size()==0)
        return -1;
    return mins.top();
}


