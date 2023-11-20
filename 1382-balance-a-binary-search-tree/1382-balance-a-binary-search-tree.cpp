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
        void inorder(TreeNode *root,vector<int> &values)
        {
            if(!root)
           return;
                inorder(root->left,values);
                values.push_back(root->val);
                inorder(root->right,values);
        
        }
        
        TreeNode* balance(vector<int> &values,int start,int end)
        {
                if(start>end)
                        return NULL;
                int mid=(start+end)/2;
               TreeNode * head=new TreeNode(values[mid]);
                head->left=balance(values,start,mid-1);
                head->right=balance(values,mid+1,end);
                return head;
                
        }
        
        
        
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> values;
            inorder(root,values);
            int N=values.size()-1;
            return balance(values,0,N);
            
    }
};