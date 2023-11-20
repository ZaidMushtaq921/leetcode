/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
void inorder(TreeNode * root,vector<int> &result)
{
        if(!root)
        {
            return;
        }
         inorder(root->left,result);
         result.push_back(root->val);
         inorder(root->right,result);
        
}


public:
    TreeNode* increasingBST(TreeNode* root) {
  vector<int> result;
  inorder(root,result);
  TreeNode *head=NULL;
  TreeNode *temp=NULL;
    for(auto it: result)
    {
if(head==NULL)
{
      head=new TreeNode(it);
        temp=head;
}
            
else
{
        temp->right=new TreeNode(it);
temp=temp->right;
}
    }
return head;
    }
};