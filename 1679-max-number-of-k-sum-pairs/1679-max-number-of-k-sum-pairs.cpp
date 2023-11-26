class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
        int count = 0;
        std::unordered_map<int, int> mp;

        // Count the frequency of each element in the nums vector
        for (auto it : nums) {
            mp[it]++;
        }

        // Iterate through the nums vector
        for (int i = 0; i < nums.size(); i++) {
               if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                       continue;
                }
            int left = k - nums[i];
 mp[nums[i]]--;
            // Check if the complement element is present in the map
            if (mp.count(left) > 0 && mp[left] > 0) {
                count++;
                mp[left]--;

               
                // If the frequency becomes 0, remove the element from the map
                if (mp[left] == 0) {
                    mp.erase(left);
                }

                // Decrement the frequency of the current element
                

                // If the frequency becomes 0, remove the element from the map
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
            }
        }
        return count;
    }
};