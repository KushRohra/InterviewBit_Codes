/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) 
{
    map<int, vector<int> > m;
    queue<pair<TreeNode *, int>> q;
    vector<vector<int> > sol;
    if(!root)
        return sol;
    q.push({root, 0});
    while(!q.empty())
    {
        pair<TreeNode *, int> temp = q.front();
        q.pop();
        m[temp.second].push_back(temp.first->val);
        if(temp.first->left)
            q.push({temp.first->left, temp.second-1});
        if(temp.first->right)
            q.push({temp.first->right, temp.second+1});
    }
    for(auto it=m.begin();it!=m.end();it++)
        sol.push_back(it->second);
    return sol;
}

