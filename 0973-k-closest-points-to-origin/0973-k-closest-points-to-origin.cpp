class compare
{
public:
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const
    {
        return sqrt(pow(a.first, 2) + pow(a.second, 2)) < sqrt(pow(b.first, 2) + pow(b.second, 2));
    }
};

class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

        for (int i = 0; i < points.size(); i++)
        {
            pair<int, int> element(points[i][0], points[i][1]);

            if (pq.size() < k)
            {
                pq.push(element);
            }
            else
            {
                pair<int, int> top = pq.top();
                if (sqrt(pow(top.first, 2) + pow(top.second, 2)) > sqrt(pow(element.first, 2) + pow(element.second, 2))) {
                    pq.pop();
                    pq.push(element);
                }
            }
        }

        vector<vector<int>> result;
        while (!pq.empty())
        {
            result.push_back({ pq.top().first, pq.top().second });
            pq.pop();
        }

        return result;
    }
};