int Solution::maximumGap(const vector<int> &A) {
    int minVal, maxVal, i, n=A.size();
    minVal=*min_element(A.begin(), A.end());
    maxVal=*max_element(A.begin(), A.end());
    vector<int> bmax(n-1,INT_MIN), bmin(n-1,INT_MAX);
    float gap=(float)(maxVal-minVal)/(n-1);
    for(i=0;i<n;i++) {
        if(A[i]==minVal || maxVal==A[i])
            continue;
        int index = (A[i]-minVal)/gap;
        bmin[index] = min(bmin[index], A[i]);
        bmax[index] = max(bmax[index], A[i]);
    }
    int prev=minVal, ans=-1;
    for(i=0;i<n-1;i++) {
        if(bmin[i]==INT_MAX)
            continue;
        ans=max(ans, bmin[i]-prev);
        prev=bmax[i];
    }
    ans=max(ans, maxVal-prev);
    return ans;
}

