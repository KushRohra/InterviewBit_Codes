/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool solve(TreeNode *root, int min, int max)
{
    if(root==NULL)
        return 1;
    if(root->val<min && root->val>max)
        return 0;
    return solve(root->left, min, root->val-1) && solve(root->right, root->val+1, max);
}
int Solution::isValidBST(TreeNode* A) 
{
    return (solve(A, INT_MIN, INT_MAX));
}
