/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void path(TreeNode *root, int &sum, int number)
{
    if(root==NULL)
        return;
    number = number *10 + root->val;
    number = number %1003;
    path(root->left, sum, number);
    path(root->right, sum, number);
    if(root->left==NULL && root->right == NULL)
    {
        sum = sum + number;
        sum = sum %1003;
    }
    else number = number / 10;
}
int Solution::sumNumbers(TreeNode* A) 
{
    int sum = 0, number = 0; 
    path(A, sum, number);
    return sum % 1003;
}