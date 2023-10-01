class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int max=INT_MIN;
        if(nums.size()<2)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            int dif=nums[i+1]-nums[i];
            if(max<dif)
            {
                max=dif;
            }
        }
        return max;
    }
};