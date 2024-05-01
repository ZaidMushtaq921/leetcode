class Solution {
public:
    int digitSumMethod(int num)
    {
        int sum=0;
        while(num!=0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        for(int i=0;i<nums.size();i++)
        {
            elementSum+=nums[i];
            if(nums[i]>9)
            {
                digitSum+= digitSumMethod(nums[i]);
            }
            else{
                digitSum+=nums[i];
            }
            
        }
        return abs(elementSum-digitSum);
    }
};