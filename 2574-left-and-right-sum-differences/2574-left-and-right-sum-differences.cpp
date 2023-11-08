class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       
        vector<int>leftsum(nums.size(),0);
        vector<int>rightsum(nums.size(),0);
        int rs=0;
        int ls=0;
        for(int i=0,j=nums.size()-1;i<nums.size()&&j>=0;i++,j--)
        {
            leftsum[i]=ls;
            ls+=nums[i];
            rightsum[j]=rs;
            rs+=nums[j];
        }
        for(int i=0;i<nums.size();i++)
        {
           leftsum[i]=abs(leftsum[i]-rightsum[i]); 
        }
        return leftsum;
        
    }
};