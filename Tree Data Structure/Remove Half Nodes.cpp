/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool isHalf(TreeNode *root)
{
    if(root->left && !root->right)
        return true;
    if(root->right && !root->left)
        return true;
    return false;
}
TreeNode * removeHalf(TreeNode *root)
{
    if(!root)
        return NULL;
    root->left = removeHalf(root->left);
    root->right = removeHalf(root->right);
    if(isHalf(root))
    {
        if(root->left)
            return root->left;
        if(root->right)
            return root->right;
    }
    return root;
}
TreeNode* Solution::solve(TreeNode* A) 
{
    return removeHalf(A);
}

