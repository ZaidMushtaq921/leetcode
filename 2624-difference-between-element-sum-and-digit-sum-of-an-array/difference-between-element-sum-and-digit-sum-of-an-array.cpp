class Solution {
public:
     int differenceOfSum(const vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for (int num : nums) {
            elementSum += num;
            while (num != 0) {
                digitSum += num % 10;
                num /= 10;
            }
        }

        return abs(elementSum - digitSum);
    }
};