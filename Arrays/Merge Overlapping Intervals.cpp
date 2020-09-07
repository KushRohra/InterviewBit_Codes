/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
   
bool comp(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    int n=A.size(),i;
    sort(A.begin(),A.end(),comp);
    vector<Interval> sol;
    Interval l;
    i=1;
    l.start=A[0].start;
    l.end=A[0].end;
    while(i<n)
    {
        if(A[i].start<=l.end)
        {
            if(A[i].end>l.end)
                l.end=A[i].end;
        }
        else
        {
            sol.push_back(l);
            l.start=A[i].start;
            l.end=A[i].end;   
        }
        i++;
    }
    sol.push_back(l);
    return sol;
}

