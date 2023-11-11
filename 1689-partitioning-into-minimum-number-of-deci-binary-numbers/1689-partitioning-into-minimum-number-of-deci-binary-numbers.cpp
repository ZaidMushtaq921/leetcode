class Solution {
public:
    int minPartitions(string n) {
        int maxi = INT_MIN;

        for (char digit : n) {
            int current = digit - '0'; 
            maxi = max(maxi, current);
        }

        return maxi;
    }
};