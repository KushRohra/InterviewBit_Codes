bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    int n=arrive.size(),i;
    vector<pair<int, int>> v;
    for(i=0;i<n;i++)
    {
        v.push_back(make_pair(arrive[i], 1));
        v.push_back(make_pair(depart[i], 0));
    }
    sort(v.begin(),v.end());
    int k=0,m=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i].second==1)
        {
            k++;
            m=max(k,m);
        }
        else k--;
    }
    if(K>=m)
        return 1;
    else return 0;
}

