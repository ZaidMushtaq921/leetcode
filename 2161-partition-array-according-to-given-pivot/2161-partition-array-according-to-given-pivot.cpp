class Solution
{
    public:
        vector<int> pivotArray(vector<int> &nums, int pivot)
        {
            vector<int> small;
            vector<int> large;
            vector<int> equal;
            for (auto it: nums)
            {
                if (it < pivot)
                    small.push_back(it);
                else if (it > pivot)
                    large.push_back(it);
                else
                    equal.push_back(it);
            }
               nums.clear();
                nums.insert(nums.end(),small.begin(),small.end());
                 nums.insert(nums.end(),equal.begin(),equal.end());
                 nums.insert(nums.end(),large.begin(),large.end());
                return nums;
                
                
        }
};