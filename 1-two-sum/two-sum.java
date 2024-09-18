class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] result = new int[2]; // Declare the result array outside the loop
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                // If a pair is found, store the indices in the result array
                result[0] = map.get(target - nums[i]);
                result[1] = i;
                return result; // Return the result immediately
            } else {
                // Store the current number and its index in the map
                map.put(nums[i], i);
            }
        }
        return result; // The result will be returned when a solution is found
    }
}
