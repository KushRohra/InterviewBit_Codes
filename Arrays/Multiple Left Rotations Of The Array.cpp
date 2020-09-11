vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) 
{
    vector<vector<int> > sol;
    vector<int> temp;
    for(int i=0;i<B.size();i++)
    {
        temp = A;
        int x = B[i]%A.size();
        //cout<<x<<" "<<B[i]<<endl;
        reverse(temp.begin(), temp.begin()+x);
        reverse(temp.begin()+x, temp.end());
        reverse(temp.begin(), temp.end());
        sol.push_back(temp);
    }
    return sol;
}

