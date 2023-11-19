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
        
      void  insertion(TreeNode* &head,int data)
        {
                if(head==NULL)
                {
                        TreeNode* node= new TreeNode(data);
                        head=node;
                        return;
                }
                else if(data>head->val)
                {
                        insertion(head->right,data);
                }
                else
                {
                       insertion(head->left,data);  
                }     
        }
        
        
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode * head=new TreeNode(preorder[0]);
            for(int i=1;i<preorder.size();i++)
            {
                insertion(head,preorder[i]) ;   
            }
         return head;
    }
};