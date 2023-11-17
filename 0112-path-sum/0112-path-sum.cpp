
class Solution {
    bool sumpath(TreeNode* root, int targetsum, int sum)
    {
        if(root==NULL)
            return false;
       if(root->left==NULL && root->right==NULL)
       {
           if((sum+root->val)==targetsum)
               return true;
       }
        return sumpath(root->left,targetsum,sum+root->val)||sumpath(root->right,targetsum,sum+root->val);
    }
    
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return sumpath(root,targetSum,sum);
    }
};