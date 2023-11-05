class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            
           int j=0;
            while(nums2[j]!=nums1[i]&&j<nums2.size())
            {
                j++;
            }
            int k=j+1;
            int max=nums2[j];
            while(k<nums2.size())
            {
                if(max<nums2[k])
                {
                    max=nums2[k];
                    break;
                }
                k++;
                
            }
            if(max==nums2[j])
            {
                ans.push_back(-1);
            }
            else
            {
                 ans.push_back(max);
            }
            
        }
        return ans;
        
    }
};