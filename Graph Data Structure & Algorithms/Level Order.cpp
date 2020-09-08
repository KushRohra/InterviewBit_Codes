/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) 
{
    queue<TreeNode *> q;
    TreeNode *root=A;
    vector< vector<int> > v1;
    vector<int> v;
    int i=0, j=0;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false)
    {
        TreeNode *temp=q.front();
        if(temp!=NULL)
        {
            v.push_back(temp->val);
            j++;
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        else
        {
            v1.push_back(v);
            i++;
            v.clear();
            q.pop();
            if(q.empty()==false)
                q.push(NULL);    
        }
    }
    return v1;
}

