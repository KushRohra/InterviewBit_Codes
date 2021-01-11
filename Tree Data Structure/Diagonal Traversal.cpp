/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<int, vector<int>> m;
void help(TreeNode *root, int l)
{
    if(!root)
        return ;
    m[l].push_back(root->val);
    help(root->left, l+1);
    help(root->right, l);
}
vector<int> Solution::solve(TreeNode* A) 
{
    m.clear();
    int l=0;
    help(A,l);
    vector<int> ans;
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        vector<int> temp=it->second;
        for(int i=0;i<temp.size();i++)
            ans.push_back(temp[i]);
    }
    return ans;
}

