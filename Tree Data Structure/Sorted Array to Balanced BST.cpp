/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *insert(vector<int> &v, int s, int e)
{
    if(s>e)
        return NULL;
    int mid=s+(e-s)/2;
    TreeNode *root = new TreeNode(v[mid]);
    root->left=insert(v,s,mid-1);
    root->right=insert(v,mid+1,e);
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A)
{
    int s=0,mid,e=A.size()-1;
    return insert(A,s,e);
}
