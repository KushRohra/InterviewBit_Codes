/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void invert(TreeNode *root)
{
    if(root==NULL)
        return ;
    TreeNode *t;
    invert(root->left);
    t=root->left;
    root->left=root->right;
    root->right=t;
    invert(root->right);
}
TreeNode* Solution::invertTree(TreeNode* A) 
{
    invert(A);
    return A;
}

