class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // Calculate the total sum of chalk required for one complete round
        long long sum = accumulate(chalk.begin(), chalk.end(), 0LL);
        
        // Reduce k to a manageable value within one full round
        k %= sum;
        
        // Iterate through the chalk array
        for (int i = 0; i < chalk.size(); i++) {
            // If k is less than the current student's chalk requirement, they will be the one to replace the chalk
            if (k < chalk[i]) {
                return i;
            }
            // Subtract the current student's chalk usage from k
            k -= chalk[i];
        }
        
        // In theory, the loop should always return an index, but we return 0 as a fallback
        return 0;
    }
};
