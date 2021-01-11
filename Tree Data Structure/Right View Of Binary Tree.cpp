/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<int, int> m;
void inorder(TreeNode *A, int level)
{
    if(!A)
        return ;
    inorder(A->left, level+1);
    m[level]=A->val;
    inorder(A->right, level+1);
}
vector<int> Solution::solve(TreeNode* A) 
{
    vector<int> sol;
    if(!A)
        return sol;
    m.clear();
    int level=0;
    inorder(A, level);
    for(auto it=m.begin();it!=m.end();it++)
        sol.push_back(it->second);
    return sol;
}

