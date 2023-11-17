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
      int diameterfast(TreeNode* root,int &diameter) {
       if(root==NULL)
       {
           return 0;
       }
        int h1= diameterfast(root->left,diameter);
        int h2= diameterfast(root->right,diameter);
         diameter=max(diameter,h1+h2);
          return  max(h1,h2)+1;
     
          }
    public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        diameterfast(root,d);
        return d;
    }
};