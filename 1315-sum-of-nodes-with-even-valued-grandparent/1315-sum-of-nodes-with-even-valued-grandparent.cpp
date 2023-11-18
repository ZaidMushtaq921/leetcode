class Solution {
private:
    int dfs(TreeNode* node, TreeNode* parent, TreeNode* grandparent) {
        if (!node) {
            return 0;
        }

        int evenGrandparentSum = 0;
        if (grandparent && grandparent->val % 2 == 0) {
            evenGrandparentSum = node->val;
        }

        return evenGrandparentSum + dfs(node->left, node, parent) + dfs(node->right, node, parent);
    }

public:
   
    int sumEvenGrandparent(TreeNode* root) {
 return dfs(root,NULL,NULL);
    }
};