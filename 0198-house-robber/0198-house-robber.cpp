class Solution {
public:
      int sum(vector<int> & num)
      {
              int prev=num[0];
              int prev2=0;
         for(int i=1;i<num.size();i++)
         {
                 int pick= num[i];
                 if(i>1)pick+=prev2;
                 int notpick=0+prev;
                 
                 int curri=max(pick,notpick);
               prev2=prev;
                 prev=curri;    
         }
            return prev;  
      }
        
    int rob(vector<int>& nums) {
            int n=nums.size();
            if(n==1)return nums[0];
     
         return sum(nums);   
    }
};