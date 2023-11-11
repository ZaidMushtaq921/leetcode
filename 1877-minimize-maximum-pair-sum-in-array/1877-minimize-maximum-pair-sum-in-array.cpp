class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int sum;
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
        {
            sum=nums[i]+nums[j];
            maxi=max(maxi,sum);
        }
    return maxi;
    }
};