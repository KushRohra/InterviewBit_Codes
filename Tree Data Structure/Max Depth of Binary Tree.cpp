/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) 
{
        queue<TreeNode *> q;
        q.push(A);
        TreeNode *t;
        q.push(NULL);
        int c=0;
        while(q.empty()==false)
        {
            while(q.front()!=NULL)
            {
                t=q.front();
                q.pop();
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            if(q.front()==NULL)
            {
                c++;
                q.pop();
                if(q.empty()==false)    
                    q.push(NULL);
            }
        }
        return c;
}