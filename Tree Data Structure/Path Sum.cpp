/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int path(TreeNode *root, int x, int &sum, int &f)
{
    if(root==NULL)
        return 0;
    sum+=root->val;
    path(root->left, x, sum, f);
    path(root->right, x, sum, f);
    if(sum == x && root!=NULL && root->left == NULL && root->right == NULL)
    {
       f=1;
       sum-=root->val;
    }
    else 
    {
        sum-=root->val;
    }
}
int Solution::hasPathSum(TreeNode* A, int B)
{
    int a=0,sum=0;
    path(A, B, sum, a);
    return a;
}
