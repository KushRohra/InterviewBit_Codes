/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void path(TreeNode *A, int B, vector<int> v, vector<int> &ans)
{
    if(!A || ans.size()!=0)
        return ;
    v.push_back(A->val);
    if(A->val==B)
        ans=v;
    path(A->left, B, v, ans);
    path(A->right, B, v, ans);
}
vector<int> Solution::solve(TreeNode* A, int B) 
{
    vector<int> ans; 
    if(!A)
        return ans;
    if(A->val==B)
    {
        ans.push_back(B);
        return ans;
    }
    vector<int> v;
    path(A,B,v,ans);
    return ans;
}

