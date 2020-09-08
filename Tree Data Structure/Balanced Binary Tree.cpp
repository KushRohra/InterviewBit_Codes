/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int h(TreeNode *root)
{
    if(root==NULL)
        return 0;
    return 1+max(h(root->left), h(root->right));
}
int Solution::isBalanced(TreeNode* A) 
{
    if(A==NULL)
        return 1;
    int lh=h(A->left), rh=h(A->right);
    if(abs(lh-rh)<=1 && isBalanced(A->left) && isBalanced(A->right))
        return 1;
    return 0;
}
