/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A)
{
    queue<TreeNode *> q;
    vector<int> v,ans;
    vector<vector<int>> p;
    q.push(A);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode *temp=q.front();
        q.pop();
        if(!temp)
        {
            if(q.size()!=0)
                q.push(NULL);
            p.push_back(v);
            v.clear();
        }
        else
        {
            v.push_back(temp->val);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    reverse(p.begin(), p.end());
    for(int i=0;i<p.size();i++)
    {
        for(int j=0;j<p[i].size();j++)
        {
            ans.push_back(p[i][j]);
        }
    }
    return ans;
}

