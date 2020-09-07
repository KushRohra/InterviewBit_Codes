/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int maxpathsum(TreeNode *root, int &res)
{
    if(!root)
        return 0;
    int l=maxpathsum(root->left, res), r=maxpathsum(root->right, res);
    int temp = max(max(l,r)+root->val, root->val);
    int ans = max(temp, l+r+root->val);
    res = max(res, ans);
    //cout<<root->val<<" "<<res<<endl;
    return temp;
}
int Solution::maxPathSum(TreeNode* A) 
{
    int res=INT_MIN;
    maxpathsum(A, res);
    return res;
}

