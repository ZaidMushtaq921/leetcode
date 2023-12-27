class Solution
{
    public:
        int minCost(string colors, vector<int> &neededTime)
        {
            if (colors.size() == 1)
                return 0;
            int count = 0;

            int prev = 0;
            for (int i = 1; i < colors.size(); i++)
            {
                if (colors[prev] == colors[i])
                {
                    if (neededTime[prev] > neededTime[i])
                    {
                        count += neededTime[i];
                    }
                    else
                    {
                        count += neededTime[prev];
                        prev = i;
                    }
                }
                else
                {
                    prev = i;
                }
            }
            return count;
        }
};