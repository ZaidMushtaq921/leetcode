class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> m;    
        vector<int> dummy=nums;
        sort(dummy.begin(),dummy.end());
        int prev = dummy[0];
        int count=0;
        int repeat=0;
        for(int i=0;i<dummy.size();i++)
        {
            if(dummy[i]==prev)
            {
                
                m[dummy[i]]=count;
                repeat++;
            }
            else
            {
                count+=repeat;
                m[dummy[i]]=count;
                repeat=1;
                 prev = dummy[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
          dummy[i]=m[nums[i]]; 
        }
        return dummy;
    }
};