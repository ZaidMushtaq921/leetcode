#include <vector>
#include <iostream>

class Solution {
public:
    int sumOddLengthSubarrays(std::vector<int>& arr) {
        int result = 0;
        int n = arr.size();
        
        // Iterate through all possible odd lengths
        for (int oddRange = 1; oddRange <= n; oddRange += 2) {
            // Iterate through all possible starting points of subarrays of length oddRange
            for (int i = 0; i + oddRange <= n; i++) {
                // Sum up the subarray from arr[i] to arr[i + oddRange - 1]
                for (int j = i; j < i + oddRange; j++) {
                    result += arr[j];
                }
            }
        }
        
        return result;
    }
};


