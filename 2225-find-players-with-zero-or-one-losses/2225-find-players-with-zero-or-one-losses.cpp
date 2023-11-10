class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       vector<vector<int>> answer(2); 
        unordered_map<int,int> mloss;
          unordered_map<int,int> mwon;
        vector<int> result;
        for(auto it: matches)
        {
            mwon[it[0]]++;
        }
        for(auto it: matches)
        {
            mloss[it[1]]++;
        }
        for(auto pair: mwon)
        {
            int key=pair.first;
            auto it = mloss.find(key);
            if(it==mloss.end())
            {
                result.push_back(key);
            }  
        }
        sort(result.begin(),result.end());
        answer[0]=(result);
        result.clear();
           for(auto pair: mloss)
        {
           if(pair.second==1)
           {
               result.push_back(pair.first);
           }
        }
        sort(result.begin(),result.end());
        answer[1]=(result);
        return answer;
        
    }
};