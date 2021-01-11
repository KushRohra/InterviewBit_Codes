/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
unordered_map<TreeNode*, TreeNode*> m;
void findNode(TreeNode *root, TreeNode *&targetNode, int B, TreeNode *parent) {
    if(!root)
        return ;
    m[root]=parent;
    if(root->val=B) 
        targetNode=root;
    findNode(root->left,targetNode,B,root);
    findNode(root->right,targetNode,B,root);
} 
int Solution::solve(TreeNode* root, int B) {
    m.clear();
    TreeNode *targetNode=NULL;
    findNode(root,targetNode,B,NULL);
    int ans=0;
    queue<pair<TreeNode*,int>> q;
    q.push({targetNode,0});
    unordered_set<TreeNode*> s;
    while(!q.empty()) {
        int size=q.size();
        for(int i=0;i<size;i++) {
            TreeNode *temp=q.front().first;
            int time=q.front().second;
            q.pop();
            ans=max(ans,time);
            if(s.find(temp)!=s.end())
                continue;
            s.insert(temp);
            if(temp->left)    q.push({temp->left,time+1});
            if(temp->right)    q.push({temp->right,time+1});
            if(m[temp])    q.push({m[temp],time+1});
        }
    }
    return ans;
}

