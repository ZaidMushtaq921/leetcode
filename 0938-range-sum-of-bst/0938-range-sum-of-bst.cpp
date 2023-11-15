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
int sum(TreeNode* root,int &s,int l, int h)
{
    if(root==NULL)
        return NULL;
    if(root->val>=l&& root->val<=h)
        s+=root->val;
    sum(root->left,s,l,h);
        sum(root->right,s,l,h);
return s;
}
    
    
    public:
    int rangeSumBST(TreeNode* root, int low, int high) {
       int s=0;
       return sum(root,s,low,high); 
        
        
    }
};