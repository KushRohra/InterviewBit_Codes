/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* deleteDuplicates(listnode* A)
{
    listnode b,c=NULL,temp;
    b=*A;
    while(b!=NULL)
    {
        if(c==NULL)
        {
            c=listnode_new(b->val);
            c->next=NULL;
        }
        else
        {
            if(c->val!=b->val)
            {
                temp=listnode_new(b->val);
                temp->next=c;
                c=temp;
            }
        }
        b=b->next;
    }
    while(c!=NULL)
    {
        if(b==NULL)
        {
            b=listnode_new(c->val);
            b->next=NULL;
        }
        else
        {
            temp=listnode_new(c->val);
            temp->next=b;
            b=temp;
        }
        c=c->next;
    }
    *A=c;
}

