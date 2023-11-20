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
    TreeNode* BST(vector<int>& preorder, int &index, long long leftlimit, long long rightlimit) {
        if (index >= preorder.size())
            return NULL;

        int element = preorder[index];

        // Check if the current element is within the valid range for the current node
        if (element < leftlimit || element > rightlimit)
            return NULL;
index++;
        // Create a new TreeNode with the current element
        TreeNode* node = new TreeNode(element);

        // Recursively build the left and right subtrees
        node->left = BST(preorder, index, leftlimit, element);
        node->right = BST(preorder, index, element, rightlimit);

        return node;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // Initialize the BST construction with the entire range of INT_MIN to INT_MAX
       int index=0;
            return BST(preorder, index, INT_MIN, INT_MAX);
    }
};