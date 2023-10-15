class Solution {
    
    void solve (vector<int> nums, vector<int> output, vector<vector<int>>& ans,int index)
    {
//         base case
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }
//         excluding
        solve(nums,output,ans,index+1);
//         includeing
        output.push_back(nums[index]);
                solve(nums,output,ans,index+1);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        
        solve(nums,output,ans,0);
        return ans;
        
    }
};