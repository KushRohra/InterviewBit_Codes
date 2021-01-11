/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
unordered_map<int, vector<pair<int, int>>> m;
void helper(TreeNode *root, int parent, int B, int l, int &level, int &p)
{
    if(!root)
        return ;
    pair<int, int> a;
    a.first=root->val;
    a.second=parent;
    if(root->val==B)
    {
        level=l;
        p=parent;
    }
    m[l].push_back(a);
    helper(root->left, root->val, B, l+1, level, p);
    helper(root->right, root->val, B, l+1, level, p);
}
vector<int> Solution::solve(TreeNode* A, int B)
{
    m.clear();
    vector<int> ans;
    if(A->val==B)
        return ans;
    int l=0, level, p;
    helper(A,-1,B,l,level,p);
    for(int i=0;i<m[level].size();i++)
    {
        int x=m[level][i].first, y=m[level][i].second;
        if(x==B)
            continue;
        else if(y==p)
            continue;
        else ans.push_back(x);
    }
    return ans;
}

