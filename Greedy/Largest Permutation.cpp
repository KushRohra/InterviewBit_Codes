vector<int> Solution::solve(vector<int> &arr, int k) {
    int i, n=arr.size();
    vector<int> pos(n+1,0);
    for(i=0;i<n;i++)
        pos[arr[i]]=i;
    i=0;
    while(i<n && k>0) {
        if(arr[i]==n-i) {
            i++;
            continue;
        }
        arr[pos[n-i]]=arr[i];
        pos[arr[i]]=pos[n-i];
        arr[i]=n-i;
        pos[n-i]=i;
        k--;
        i++;
    }
    return arr;
}

