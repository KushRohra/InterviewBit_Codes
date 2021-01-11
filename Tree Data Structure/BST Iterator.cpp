/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> v;
void inorder(TreeNode *root, vector<int> &temp)
{
    if(!root)
        return ;
    inorder(root->right, temp);
    temp.push_back(root->val);
    inorder(root->left, temp);
}
BSTIterator::BSTIterator(TreeNode *root) {
    vector<int> temp;
    inorder(root, temp);
    v = temp;
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    return v.size() > 0;
}

/** @return the next smallest number */
int BSTIterator::next() {
    int x = v[v.size()-1];
    v.pop_back();
    return x;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

