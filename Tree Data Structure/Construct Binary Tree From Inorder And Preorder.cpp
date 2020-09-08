/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
unordered_map<int, int> m;
int preIndex;
TreeNode *build(vector<int> &in, vector<int> &pre, int start, int end)
{
    if(start>end)
        return NULL;
    if(preIndex==in.size())
        return NULL;
    int x = pre[preIndex++];
    TreeNode *newNode = new TreeNode(x);
    /*if(start==end)
        return newNode;*/
    int Index = m[x];
    newNode->left = build(in, pre, start, Index-1);
    newNode->right = build(in, pre, Index+1, end);
    return newNode;
}
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) 
{
    m.clear();
    preIndex = 0;
    int start = 0, end = in.size()-1;
    for(int i=0;i<in.size();i++)
        m[in[i]] = i;
    return build(in, pre, start, end);
}
