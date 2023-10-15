class Solution {
private:
    void solve(vector<int> nums,vector<vector<int>>&ans,int index)
    {
        // base case 
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
//         place eaach element at one at every position and go to next place and repeat same
        for(int j=index;j<nums.size();j++)
        {
//             placing element at a place;
            swap(nums[j],nums[index]);
//             repeating for left elements
            solve(nums,ans,index+1);
//             removing the changes on nums so to perform repetation correctly
            swap(nums[j],nums[index]);
        }
    }
    public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,0);
        return ans;
    }
};