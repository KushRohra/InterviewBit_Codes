/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) 
{
    queue<TreeNode *> q;
    queue<int> qi;
    int min=INT_MAX;
    q.push(A);
    qi.push(0);
    TreeNode *t;
    q.push(NULL);
    qi.push(-1);
    int c=0;
    while(q.empty()==false)
    {
        while(q.front()!=NULL)
        {
            t=q.front();
            q.pop();
            qi.pop();
            if(t->left!=NULL)
            {
                q.push(t->left);
                qi.push(c);
            }
            if(t->right!=NULL)
            {
                q.push(t->right);
                qi.push(c);
                
            }
            if(t->left==NULL && t->right==NULL)
            {
                int x=c;
                if(min>x)
                    min=x+1;
            }
        }
        if(q.front()==NULL)
        {
            c++;
            q.pop();
            qi.pop();
            if(q.empty()==false)  
            {
                q.push(NULL);
                qi.push(-1);
            }
        }
    }
    return min;
}

