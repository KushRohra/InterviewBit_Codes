/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *solve(TreeNode *A, int B, int C, bool &b1, bool &b2)
{
    if(A==NULL)
        return NULL;
    if(A->val==B)
    {
        b1=true;
        return A;
    }
    if(A->val==C)
    {
        b2=true;
        return A;
    }
    TreeNode *left=solve(A->left, B, C, b1, b2);
    TreeNode *right=solve(A->right, B, C, b1, b2);
    if(left && right)
        return A;
    return (left != NULL)? left: right; 
}
bool find(TreeNode *root, int k) 
{ 
    if (root == NULL) 
        return false; 
    if (root->val == k || find(root->left, k) ||  find(root->right, k)) 
        return true; 
    return false; 
} 
int Solution::lca(TreeNode* A, int B, int C) 
{
    if(A==NULL)
        return -1;
    if(A->val==B && A->val==C)
        return A->val;
    bool b1=false, b2=false;
    if(find(A,B)==false)
        return -1;
    if(find(A,C)==false)
        return -1;
    TreeNode *root=solve(A,B,C,b1,b2);
    return root->val;
    return -1;
}

