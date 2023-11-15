/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    private:
    TreeNode*  result;
    TreeNode*  inorder(TreeNode* &root,TreeNode* &target)
    {
        if(root==NULL)
            return root;
        
        if(root->val==target->val)
            result= root;
        inorder(root->left,target);
        inorder(root->right,target);

        return result;
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {     
        return inorder(cloned,target);  
    }
};