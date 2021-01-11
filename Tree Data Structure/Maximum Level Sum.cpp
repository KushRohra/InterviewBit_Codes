/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode *root, unordered_map<int, int> &m, int level)
{
    if(!root)
        return ;
    if(m.find(level)==m.end())
        m[level]=root->val;
    else m[level]+=root->val;
    helper(root->left, m, level+1);
    helper(root->right, m ,level+1);
}
int Solution::solve(TreeNode* A) 
{
    if(!A)
        return 0;
    unordered_map<int, int> m;
    int ans=INT_MIN, level=0;
    helper(A, m, level);
    for(auto it=m.begin();it!=m.end();it++)
        ans = max(ans, it->second);
    return ans;
}

