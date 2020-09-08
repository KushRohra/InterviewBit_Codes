/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void flat(TreeNode *root)
{
    if(!root)
        return;
    flat(root->left);
    flat(root->right);
    TreeNode *temp = root->right;
    root->right=root->left;
    root->left=NULL;
    while(root->right!=NULL)
        root=root->right;
    root->right=temp;
}
TreeNode* Solution::flatten(TreeNode* A) 
{
    flat(A);
    return A;
}