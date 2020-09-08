/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) 
{
    if(!A)
        return ;
    if(A->left==NULL && A->right==NULL)
    {
        A->next=NULL;
        return ;
    }
    queue<TreeLinkNode *> q;
    q.push(A);
    q.push(NULL);
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            q.pop();
            if(q.size()!=0)
                q.push(NULL);
        }
        else
        {
            TreeLinkNode *temp=q.front();
            q.pop();
            temp->next=q.front();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return ;
    
}

