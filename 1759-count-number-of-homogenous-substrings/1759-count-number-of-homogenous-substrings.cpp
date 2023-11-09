class Solution {
public:
    int countHomogenous(string s) {
        int sum = 0;
        long long count = 1;
        const int MOD = 1e9 + 7;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && s[i] == s[i + 1]) {
                count++;
            } else {
                sum = (sum + (count * (count + 1) / 2) % MOD) % MOD;
                count = 1;
            }
        }

        return sum;
    }
};
