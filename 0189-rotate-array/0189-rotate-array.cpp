class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int> num(nums.size(),0);
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int index=(k+i)%n;
            num[index]=nums[i];
        }
        
        for(int i=0;i<num.size();i++)
        {
            nums[i]=num[i];
        }
    }
};