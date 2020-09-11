/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode* search(struct TreeNode* root, int key) 
{ 
    if(root==NULL || root->val==key) 
       return root; 
    if(root->val<key) 
       return search(root->right, key); 
    return search(root->left, key); 
} 
void check(TreeNode *main, TreeNode *root, int x, int &f)
{
    if(root==NULL)
        return;
    int k=x-root->val;
    //cout<<k<<" "<<root->val<<endl;
    TreeNode *p=search(main, k);
    if(p!=NULL && p!=root && p->val==k)
        f=1;
    check(main, root->left, x, f);
    check(main, root->right, x, f);
}
int Solution::t2Sum(TreeNode* A, int B) 
{
    int f=0;
    check(A, A, B, f);
    return f;
}

