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
class Info{
  public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};
Info solve(TreeNode *root,int &ans)
{
    if(!root)
    return {INT_MIN,INT_MAX,true,0};
    
    
    Info left= solve(root->left,ans);
    Info right=solve(root->right,ans);
    
    Info current;
    current.mini = min(left.mini,root->val);
    current.maxi=max(right.maxi,root->val);
    current.size=left.size+right.size+root->val;
    
    if(left.isBST && right.isBST && (left.maxi < root->val && right.mini > root->val))
    {
        current.isBST=true;
    }
    else
    {
         current.isBST=false;
    }
    if(current.isBST)
    {
        ans=max(ans,current.size);
    }
    return current;
}

class Solution {
public:
    int maxSumBST(TreeNode* root) {
       int ans=0;
    	Info temp=solve(root,ans);
    	return ans; 
    }
};