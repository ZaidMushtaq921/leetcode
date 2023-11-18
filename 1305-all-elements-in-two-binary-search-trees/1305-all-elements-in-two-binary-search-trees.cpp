class Solution {
    private:
   void getElements(TreeNode* root, vector<int>& result) {
        if (!root)
            return;
        getElements(root->left, result);
        result.push_back(root->val);
        getElements(root->right, result);
    }
public:

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        getElements(root1,ans);
        getElements(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;

    }
};