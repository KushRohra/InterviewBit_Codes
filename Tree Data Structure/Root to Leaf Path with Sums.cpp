/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int path1(TreeNode *root, int x, int &sum, vector<int> &v, vector<vector<int> > &sol)
{
    if(root==NULL)
        return 0;
    sum+=root->val;
    v.push_back(root->val);
    path1(root->left, x, sum, v, sol);
    path1(root->right, x, sum, v, sol);
    if(sum == x && root->left == NULL && root->right == NULL)
    {
        auto it = v.end();
        it--;
        sol.push_back(v);
        v.erase(it);
        sum-=root->val;
    }
    else 
    {
        auto it = v.end();
        it--;
        v.erase(it);
        sum-=root->val;
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) 
{
    int sum=0;
    vector<int> v;
    vector<vector<int> > sol;
    path1(A, B, sum, v, sol);
    return sol;
}
