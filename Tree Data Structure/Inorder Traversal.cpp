/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) 
{
    stack<TreeNode *> s;
    TreeNode *p=A;
    vector<int> v;
    while(p!=NULL)
    {
        s.push(p);
        p=p->left;
    }
    while(s.empty()==false)
    {
        p=s.top();
        s.pop();
        v.push_back(p->val);
            p=p->right;
            if(p && p->left!=NULL)
            {
                TreeNode *p1=p;
                while(p1 && p1!=NULL)
                {
                    s.push(p1);
                    p1=p1->left;
                }
            }
            else
            {
                if(p!=NULL)
                    s.push(p);   
            }
        
    }
    return v;
}

