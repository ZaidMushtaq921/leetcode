
class Solution {
    private:
   
    
    pair<int,int> subtree(TreeNode* root)
    {
        if(root==NULL)
            return {0,0};
        auto leftcount=subtree(root->left);
        auto rightcount=subtree(root->right);
        
        int sum= leftcount.first +rightcount.first +root->val ;
        int count=leftcount.second +rightcount.second + 1;
        if(sum/count == root->val)
        {
           s++;
        }
         return {sum,count};
    }
    
    
public:
    int s=0;
    int averageOfSubtree(TreeNode* root) {
        subtree(root);
        return s++;
    }
};