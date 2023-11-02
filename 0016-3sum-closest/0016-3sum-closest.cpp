class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       long long closestSum = INT_MAX; // Initialize closestSum to a large value
        int n = nums.size();
        sort(nums.begin(), nums.end());
       
       for(int i = 0; i < n - 2; i++) {
           int start = i + 1;
           int end = n - 1;
           while(start < end) {
               int sum = nums[i] + nums[start] + nums[end];
               
               if (sum == target) {
                   return sum;
               }
               else {
                   if (abs(sum - target) < abs(closestSum - target)) {
                       closestSum = sum;
                   }
                   if (sum < target) {
                       start++;
                   }
                   else {
                       end--;
                   }
               }
           }   
       }
       return closestSum; // Return the closest sum found
    }
};
