class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int i=0;
        while(i<j && nums[i]<0){
            if(abs(nums[i])==nums[j])
            {
                return nums[j];
            }
            else if(abs(nums[i])>nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return -1;
    }
};