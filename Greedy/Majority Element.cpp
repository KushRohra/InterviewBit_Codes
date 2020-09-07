int Solution::majorityElement(const vector<int> &A) {

    int i,n=A.size();
    unordered_map<int, int> m;
    for(i=0;i<n;i++)
    {
        m[A[i]]++;
        if(m[A[i]]>n/2)
            return A[i];
    }
}

