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
    pair<int,int> deepestfast(TreeNode * root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        if(root->left==NULL && root->right==NULL)
        {
            return {1,root->val};
        }
        pair<int,int> leftside= deepestfast(root->left);
        pair<int,int> rightside= deepestfast(root->right);
        
        if(leftside.first>rightside.first)
        {
            
            return {leftside.first+1,leftside.second};
        }
        else if(leftside.first<rightside.first)
        {
            return {rightside.first+1,rightside.second};
        }
        else
        {
            return {rightside.first+1,rightside.second+leftside.second};
        }
        
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        
        return deepestfast(root).second;
    }
};