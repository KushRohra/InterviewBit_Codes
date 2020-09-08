/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode *root, vector<int> &v)
{
    if(!root)   return ;
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
}
void insertionsort(vector<int> &v)
{
    int i, j, key, n=v.size();
    for(i=1;i<n;i++)
    {
        j=i-1;
        key=v[i];
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}
vector<int> Solution::recoverTree(TreeNode* A)
{
    vector<int> sol;
    if(!A) return sol;
    vector<int> v1, v2;
    inorder(A, v1);
    v2=v1;
    insertionsort(v1);
    //print(v1);
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]!=v2[i])
        {
            sol.push_back(v1[i]);
            sol.push_back(v2[i]);
            return sol;
            break;
        }
    }
}

