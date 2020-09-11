/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void findk(TreeNode *root, int k, int &a)
{
    if(root==NULL)
        return;
    findk(root->left, k, a);
    k--;
    if(k==0)
    {
        a=root->val;
    }
    findk(root->right, k, a);
}
int Solution::kthsmallest(TreeNode* A, int B) 
{
    int a=0;
    findk(A,B,a);
    return a;
}

