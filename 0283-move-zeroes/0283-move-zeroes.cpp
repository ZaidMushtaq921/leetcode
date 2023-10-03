class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int k = 0;
        int swap1=0;
        while ( k < nums.size() )
        {
            for(int i =0;i<nums.size()-1-k;i++)
            {
                if(nums[i]==0)
                {
                    swap(nums[i],nums[i+1]);
                    swap1=1;
                }
            }
            k++;
            if(swap1==0)
            {
                break;
            }
        }
        
    }
};