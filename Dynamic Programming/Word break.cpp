int Solution::wordBreak(string A, vector<string> &B) {
    
    unordered_set<string> dict;
    int n=A.size();
    for(int i=0;i<B.size();i++)
        dict.insert(B[i]);
    vector<bool> dp(n + 1, 0);
    vector<int> matched_index; 
    matched_index.push_back(-1); 
    for (int i = 0; i < n; i++) { 
        int msize = matched_index.size(); 
        int f = 0; 
        for (int j = msize - 1; j >= 0; j--) { 
            string sb = A.substr(matched_index[j] + 1, i - matched_index[j]); 
            if (dict.find(sb)!=dict.end()) { 
                f = 1; 
                break; 
            } 
        } 
        if (f == 1) { 
            dp[i] = 1; 
            matched_index.push_back(i); 
        } 
    } 
    return dp[n - 1];
    
}

