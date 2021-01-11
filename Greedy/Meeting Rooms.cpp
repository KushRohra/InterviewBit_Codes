struct Job
{
    int time;
    bool type;
};
bool comp(Job &a, Job &b)
{
    if(a.time==b.time)
        return a.type>b.type;
    return a.time<b.time;
}
int Solution::solve(vector<vector<int> > &A) 
{
    vector<Job> vec;
    for(int i=0;i<A.size();i++)
    {
        Job job2, job1;
        job1.time=A[i][0]; job2.time=A[i][1];
        job1.type=0; job2.type=1;
        vec.push_back(job1);
        vec.push_back(job2);
    }
    sort(vec.begin(), vec.end(), comp);
    int c=0, ans=0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i].type==0)
            c++;
        else c--;
        ans=max(ans,c);
    }
    return ans;
}

