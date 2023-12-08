class Solution {
public:
    string tree2str(TreeNode* root) {
       string result;
        preorder(root, result);
        return result;
    }

private:
    void preorder(TreeNode* root, std::string& result) {
        if (!root) {
            return;
        }

        result +=to_string(root->val); 

        if (root->left || root->right) {
            result += '(';
            preorder(root->left, result);
            result += ')';
        }

        if (root->right) {
            result += '(';
            preorder(root->right, result);
            result += ')';
        }
    }
};