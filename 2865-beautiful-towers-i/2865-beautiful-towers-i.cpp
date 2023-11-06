class Solution {
public:
    long long maximumSumOfHeights(vector<int>& nums) {
        
        stack<int> s;
        long long answer=-1;
        
        
        
        for(int i=0;i<nums.size();i++)
        {
            long long  ans =nums[i];
            s.push(nums[i]);
            if(i!=nums.size()-1)
            {
             for(int right=i+1;right<nums.size();right++)
             {
                 if(nums[right]<s.top())
                 {
                     s.pop();
                     s.push(nums[right]);
                 }   
                     ans+=s.top();
             }  
               s.pop();  
            }
             s.push(nums[i]);
            if(i!=0)
            {
                  for(int left=i-1;left>=0;left--)
              {
                 if(nums[left]<s.top())
                 {
                     s.pop();
                     s.push(nums[left]);
                 }   
                     ans+=s.top();
               }  
               
           }
             s.pop();
        answer=max(answer,ans);      
        }
            
     return answer;       
            
    }
};