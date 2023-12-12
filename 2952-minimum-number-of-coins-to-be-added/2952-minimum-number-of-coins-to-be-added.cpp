#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        int sum = 0;
        int count = 0;
        int i = 0;

        sort(coins.begin(), coins.end());

        while (sum < target && i < coins.size()) {
            if (coins[i] <= sum + 1) {
                sum += coins[i];
                i++;
            } else {
                // If the next coin is greater than sum + 1, add a new coin.
                count++;
                sum += sum + 1; // Add a new coin with denomination sum + 1.
            }
        }

        while (sum < target) {
            count++;
            sum += sum + 1;
        }

        return count;
    }
};
