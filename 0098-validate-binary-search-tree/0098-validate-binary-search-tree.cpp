class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
    }

private:
    bool isValidBSTHelper(TreeNode* node, long long lower, long long upper) {
        if (node == nullptr) {
            return true;
        }

        if (node->val <= lower || node->val >= upper) {
            return false;
        }
        return isValidBSTHelper(node->left, lower, node->val) && isValidBSTHelper(node->right, node->val, upper);
    }
};
