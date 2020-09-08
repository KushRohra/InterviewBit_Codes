/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int balance(TreeNode *root1, TreeNode *root2)
{
    if(root1==NULL && root2==NULL)
        return 1;
    if(root1 && root2 && root1->val==root2->val)
        return balance(root1->left, root2->right) && balance(root2->left, root1->right);
    return 0;
    
}
int Solution::isSymmetric(TreeNode* A) 
{
    return balance(A,A);
}
