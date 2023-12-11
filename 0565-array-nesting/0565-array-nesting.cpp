class Solution {
        int dfs(int ind,vector<int>& nums,vector<bool> &visited, int n)
        {
                if(ind>=n) return 0;
                if( visited[ind]==true) return 0;
                visited[ind]=true;
                return 1+dfs(nums[ind],nums,visited,n);
        }
        
        
public:
    int arrayNesting(vector<int>& nums) {
            int n=nums.size();
       vector<bool> visited(n,false);
            int maxi=0;
            int count=0;
            for(int i=0;i<n;i++)
            {
               if(!visited[i])
               {
                       count=dfs(i,nums,visited,n);
               }
                    maxi=max(maxi,count);
            }
            return maxi;
    }
};