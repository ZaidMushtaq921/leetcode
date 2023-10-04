class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      vector<int> ans;
        int count=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==count)
            {
                count++;
            }
            else if(nums[i]>count)
            {
                ans.push_back(count);
                count++;
                i--;
            }
        }
        for(int i=count;i<=n;i++)
        {
            ans.push_back(i);
        }
        return ans;
        
    }
};