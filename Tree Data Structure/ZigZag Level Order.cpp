/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void reverse(queue<TreeNode *> &q)
{
    stack<TreeNode *> Stack; 
    while (!q.empty()) { 
        Stack.push(q.front()); 
        q.pop(); 
    } 
    while (!Stack.empty()) { 
        q.push(Stack.top()); 
        Stack.pop(); 
    } 
}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) 
{
    vector< vector<int> > sol;
    vector<int> v;
    queue<TreeNode *> q,q1;
    q.push(A);
    q.push(NULL);
    int f=0;
    TreeNode *p;
    while(q.empty()==false)
    {
        p=q.front();
        if(p!=NULL)
            v.push_back(p->val);
        q.pop();
        if(p==NULL)
        {
            sol.push_back(v);
            v.clear();
            if(f==0)
                f=1;
            else f=0;
            reverse(q);
            if(q.size()!=0)
                q.push(NULL);
        }
        if(f==0)
        {
            if(p && p->left!=NULL)
                q.push(p->left);
            if(p && p->right!=NULL)
                q.push(p->right);    
        }
        else
        {
            if(p && p->right!=NULL)
                q.push(p->right);
            if(p && p->left!=NULL)
                q.push(p->left);
        }
    }    
    return sol;
}

