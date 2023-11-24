class Solution
{
    public:
        int maxProduct(vector<int> &nums)
        {
            priority_queue<int ,vector<int> ,greater<int>> pq;
            for (auto it: nums)
            {
                if (pq.size() < 2)
                {
                    pq.push(it);
                }
                else
                {
                    if (pq.top() < it)
                    {
                        pq.pop();
                        pq.push(it);
                    }
                }
            }
                int num1=pq.top();
                pq.pop();
                int num2=pq.top();
                return (num1-1)*(num2-1);
        }
};