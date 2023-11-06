class Solution {
    private:
    bool process(vector<int>& nums,int l, int r)
    {
       vector<int> subarray;
        for(int i=l;i<=r;i++)
        {
            subarray.push_back(nums[i]);
        }
        sort(subarray.begin(),subarray.end());
        int dif=abs(subarray[1]-subarray[0]);
        for(int i=1;i<subarray.size();i++)
        {
            if(abs(subarray[i]-subarray[i-1])!=dif)
            {
              return false;
                
            }
       
        }  
        return true;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
   
        vector<bool> result;
        for(int i=0;i<l.size();i++)
        {
            bool ans=process(nums,l[i],r[i]);
            result.push_back(ans);
        }
     return result;   
        
    }
};