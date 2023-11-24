class Solution
{
    public:
        vector<int> deckRevealedIncreasing(vector<int> &deck)
        {
            deque<int> dq;
            int size = deck.size();
            vector<int> ans(size);
            sort(deck.begin(), deck.end());
            for (int i = 0; i < deck.size(); i++)
            {
                dq.push_back(i);
            }
                int i=0;
            while (!dq.empty())
            {
                int flip = dq.front();
                dq.pop_front();
                ans[flip] = deck[i++];
                if (!dq.empty())
                {
                    int facedown= dq.front();
                    dq.pop_front();
                        
                     dq.push_back(facedown);    
                }
            }
                return ans;
        }
};