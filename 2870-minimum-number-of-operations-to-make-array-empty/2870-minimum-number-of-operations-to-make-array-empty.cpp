class Solution
{
    public:
        int minOperations(vector<int> &nums)
        {
            unordered_map<int, int> m;
            int result=0;
            for (auto it: nums)
            {
                m[it]++;
            }

            for (auto el: m)
            {
                int val = el.second;

                while (val > 1)
                {
                    if (val % 3 == 0)
                    {
                        result += val / 3;
                        val = 0;
                    }
                    else
                    {
                        result++;
                        val -= 2;
                    }
                }
                if (val == 1)
                    return -1;
            }
            return result;
        }
};