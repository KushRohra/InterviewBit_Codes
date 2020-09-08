/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int t(TreeNode *A,TreeNode *B)
{
    if(A==NULL && B!=NULL)
        return 0;
    if(A!=NULL && B==NULL)
        return 0;
    if(A==NULL && B==NULL) 
        return 1;
    if(A!=NULL && B!=NULL)
        return (A->val==B->val)*t(A->left,B->left)*t(A->right,B->right);
    /*if(A!=NULL)
        cout<<A->val<<" ";
    if(B!=NULL)
        cout<<B->val<<endl;*/
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) 
{
    return t(A,B);
}

