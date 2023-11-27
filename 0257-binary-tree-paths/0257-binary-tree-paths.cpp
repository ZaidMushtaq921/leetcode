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
     void solve(TreeNode* root,string ans,vector<string> &result)
     {
          if(!root)
          {
                  return;
          }
             if(!root->left && !root->right)
             {
                     ans+= to_string(root->val) ;
                     result.push_back(ans);
                     return;               
             }
             ans+= to_string(root->val) +  "->";
            
             solve(root->left,ans,result);
             solve(root->right,ans,result);
              
     }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> result;
         string ans;
            
            solve(root,ans,result);
            return result;    
    }
};