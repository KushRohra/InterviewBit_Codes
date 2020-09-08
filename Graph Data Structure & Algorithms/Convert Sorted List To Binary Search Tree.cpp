/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode* Solution::sortedListToBST(ListNode* A)
{
    ListNode *head=A;
    if(!head)
        return NULL;
    ListNode *prev=NULL, *slow=head, *fast=head;
    while(fast && fast->next)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev)
        prev->next=NULL;
    ListNode *t=slow;
    TreeNode *t1=new TreeNode(t->val);
    if(prev)
        t1->left=sortedListToBST(head);
    else t1->left=NULL;
    if(prev)
        t1->right=sortedListToBST(t->next);
    else t1->right=NULL;
    return t1;
}

