/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *find(TreeNode *root, int x)
{
    if(root==NULL)
        return NULL;
    if(x==root->val)
        return root;
    if(x>root->val)
        return find(root->right, x);
    return find(root->left, x);
}
TreeNode* Solution::getSuccessor(TreeNode* A, int B) 
{
    TreeNode *temp=find(A,B);   
    if(temp==NULL)  
        return NULL;
    if(temp->right!=NULL)
    {
        temp=temp->right;
        while(temp && temp->left!=NULL)
            temp=temp->left;
        return temp;
    }
    else
    {
        TreeNode *suc=NULL, *anc=A;
        while(anc!=temp)
        {
            if(temp->val<anc->val)
            {
                suc=anc;
                anc=anc->left;
            }
            else anc=anc->right;
        }
        return suc;
    }
}
