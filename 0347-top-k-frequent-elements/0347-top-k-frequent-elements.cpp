class compare
{
    public:
        bool operator()(pair<int, int> a, pair<int, int> b)
        {
            return a.second> b.second;
        }
};
class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
            unordered_map<int, int> mp;
            for (auto it: nums)
            {
                mp[it]++;
            }

            priority_queue<pair<int, int>, vector< pair<int, int>>, compare> pq;
                
                for(auto it: mp)
                {
                    if(pq.size()<k)
                    {
                            pq.push(it);
                    }
                    else{
                            if(pq.top().second < it.second )
                            {
                                    pq.pop();
                                pq.push(it);    
                            }
                    }
                    
                }
                 vector<int> ans;
                       while(!pq.empty())
                        {
                            ans.push_back(pq.top().first);
                               pq.pop();
                        }
                return ans;
                
        }
};