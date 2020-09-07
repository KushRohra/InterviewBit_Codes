/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) 
{
    int i;
    for(i=0;i<intervals.size();i++)
        if(intervals[i].start>newInterval.start)
            break;
    intervals.insert(i+intervals.begin(), newInterval);
    vector<Interval> sol;
    Interval v=intervals[0];
    for(i=1;i<intervals.size();i++)
    {
        if(intervals[i].start<=v.end)
        {
            v.start=min(intervals[i].start, v.start);
            v.end=max(intervals[i].end, v.end);
        }
        else
        {
            sol.push_back(v);
            v=intervals[i];
        }
    }
    sol.push_back(v);
    return sol;    
}

