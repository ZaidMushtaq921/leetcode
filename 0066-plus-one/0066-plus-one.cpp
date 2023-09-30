class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
for(int i=nums.size()-1;i>=0;i--)
{
    int sum=nums[i]+1;
    
    if(sum==10)
    {
        nums[i]=0;
    }
    
    else
    {
        nums[i]=sum;
        break;
    }
    if(i==0 && sum==10)
    {
        // digits.insert(digits.begin(), 1);
    nums.insert(nums.begin(),1);
    }
}
     return nums;   
    }
};