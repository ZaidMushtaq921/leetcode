class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
  vector<int> target(nums.size(),-1);
        
        for(int i=0;i<nums.size();i++)
        {
            if(target[index[i]]==-1)
            {
                  target[index[i]]= nums[i];
            }
            else
            {
               int j=index[i];
                int left = target[j];
                int next = target[j+1];
                while(left!=-1)
                {
                    target[j+1]=left;
                    left=next;
                    j++;
                    next=target[j+1];    
                }
                target[index[i]]= nums[i];
            }
        }
        return target;
    }
};