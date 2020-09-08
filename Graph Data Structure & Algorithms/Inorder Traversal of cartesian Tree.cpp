/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int maxIndex(vector<int> v, int s, int e)
{
    int max=INT_MIN, index=-1;
    for(int i=s;i<=e;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            index=i;
        }
    }
    return index;
}
TreeNode *build(vector<int> v, int s, int e)
{
    if(s>e)
        return NULL;
    int index=maxIndex(v,s,e);
    TreeNode *root=new TreeNode(v[index]);
    if(s==e)
        return root;
    root->left=build(v,s,index-1);
    root->right=build(v,index+1,e);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A) 
{
    int e=A.size()-1, s=0;
    return build(A,0,e);
}

