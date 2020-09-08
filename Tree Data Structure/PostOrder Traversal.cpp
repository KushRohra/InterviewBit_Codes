/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
vector<int> Solution::postorderTraversal(TreeNode* A)
{
    stack<TreeNode *> s,q;
    TreeNode *p1,*p=A;
    vector<int> v;
    if(A==NULL)
        return v;
    s.push(p);
    while(s.empty()==false)
    {
        p1=s.top();
        s.pop();
        if(p1 && p1->left!=NULL)
            s.push(p1->left);
        if(p1 && p1->right!=NULL)
            s.push(p1->right);
        //cout<<p1->val<<" ";
        v.push_back(p1->val);
    }
    reverse(v.begin(), v.end());
    return v;
}



