class Solution {
    private:
    int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> dis;
        int x;
        for(int i=0;i<nums.size();i++)
         {
             x= reverseNumber(nums[i]);
             dis.insert(x);
         }
        for(auto it: nums)
        {
            dis.insert(it);
        }
        return dis.size();
    }
};