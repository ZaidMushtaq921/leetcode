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
private:
      int maxDepth(TreeNode* root,int &diameter) {
       if(root==NULL)
       {
           return 0;
       }
        int h1= maxDepth(root->left,diameter);
        int h2= maxDepth(root->right,diameter);
         diameter=max(diameter,h1+h2);
          return  max(h1,h2)+1;
     
          }
    public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        maxDepth(root,d);
        return d;
    }
};