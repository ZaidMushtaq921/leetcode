class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
            sort(begin(nums),end(nums));
            int i=0;
            int j=nums.size()-1;
            int count=0;
            while(i<j)
            {
                    int sum=nums[i]+nums[j];
                    if(sum<k)
                    {
                           i++;
                    }
                    else if(sum>k)
                    {
                            j--;
                            
                    }else
                    {
                            count++;
                            i++;
                            j--;
                    } 
            }
            return count;
            
    }
};