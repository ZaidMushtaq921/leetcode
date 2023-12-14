class Solution
{
    public:
    static    bool comp(pair<int, int> a, pair<int, int> b)
        {
            return a.first - a.second < b.first - b.second;
        }
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
    {
        vector<pair<int, int>> p;
            int count=0;
        for (int i = 0; i < rocks.size(); i++)
        {
            p.push_back(make_pair(capacity[i], rocks[i]));
        }
        sort(p.begin(), p.end(), comp);
        for (int i = 0; i < p.size(); i++)
        {
            pair<int, int> temp = p[i];
            if (temp.first - temp.second == 0)
                count++;
            else if (additionalRocks >= temp.first - temp.second)
            {

                additionalRocks -= temp.first - temp.second;
                count++;
            }
        }
        return count;
    }
};