/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) 
{
    stack<TreeNode *> s,q;
    TreeNode *p=A;
    while(p!=NULL)
    {
        s.push(p);
        q.push(p);
        p=p->left;
    }
    while(s.empty()==false)
    {
        p=s.top();
        s.pop();
        /*if(p && p->left!=NULL)
        {
            TreeNode *p1=p;
            while(p1 && p1!=NULL)
            {
                s.push(p1);
                p1=p1->left;
            }
        }*/
        //
            p=p->right;
            if(p && p->left!=NULL)
            {
                TreeNode *p1=p;
                while(p1 && p1!=NULL)
                {
                    s.push(p1);
                    q.push(p1);
                    p1=p1->left;
                }
            }
            else
            {
                if(p!=NULL)
                {
                    s.push(p);
                    q.push(p);
                }
            }
        
    }
    vector<int> v1;
    while(q.empty()==false)
    {
        v1.insert(v1.begin(), q.top()->val);
        q.pop();
    }
    return v1;
}